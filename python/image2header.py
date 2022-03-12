# image2header.py
#
# 画像ファイルからカラーパレット形式のheaderファイルを生成する
# args[1]: /resource 以下の 画像ファイル名 gengar32x32.png
# args[2]: (オプション) 不動小数点で倍率を指定するとリサイズする
#
# e.g.
# python3 python/image2header.py gengar32x32.png --expansion_rate 2.0

import cv2
from cv2 import exp
import numpy as np
from sys import argv
import os
import re
import argparse

source_path = './resources/'
dist_path = './python/image2header/dist/'

# color_palet(image) returns:
# [
#   {'index': 0, 'color': array([253, 253, 253], dtype=uint8)}
#   {'index': 1, 'color': array([255, 255, 255], dtype=uint8)}
# ]
# Note: color array is [g b r]
def color_palet(cv2image):
    unique_color_gbr = np.unique(cv2image.reshape(-1, cv2image.shape[-1]), axis=0, return_counts=True)[0]
    color_palet = list(map(lambda color_with_index: 
        dict(index=color_with_index[0], color=color_with_index[1].tolist()), enumerate(unique_color_gbr)))
    return color_palet

def image_as_palet_code_matrix(cv2image, color_palette):
    matrix = []
    for row in cv2image:
        result_row = []
        for pixel in row:
            palet_code = list(filter(lambda color: color['color'][0] == pixel[0] and color['color'][1] == pixel[1] and color['color'][2] == pixel[2], color_palette))[0]['index']
            result_row.append(palet_code)
        matrix.append(result_row)
    return matrix

def resize(cv2image, expansion_rate):
    if expansion_rate == 1.0:
        return cv2image
    height = cv2image.shape[0]
    width = cv2image.shape[1]
    resized_image = cv2.resize(cv2image , (int(width * expansion_rate), int(height * expansion_rate)))
    return resized_image

def generate_header_lines_color_palette(color_palette):
    header_lines = []
    header_lines.append('// カラーパレット')
    header_lines.append('const int colorPaletteLen = ' + str(len(color_palette)) +';')
    header_lines.append('const int colorsLen = 4;')
    header_lines.append('const PROGMEM uint8_t colorPalette[colorPaletteLen][colorsLen] = {')
    for p in color_palette:
        header_lines.append('    {' + str(p['index']) + ', ' + str(p['color'][2]) + ', ' + str(p['color'][0]) + ', ' + str(p['color'][1]) + '},')
    header_lines.append('};')
    return header_lines

def genetrate_header_lines_image_formed_color_pallete(matrix):
    header_lines = []
    header_lines.append('// キャラクタ画像')
    header_lines.append('const int xLen = ' + str(len(matrix)) + ';')
    header_lines.append('const int yLen = ' + str(len(matrix[0])) + ';')
    header_lines.append('const PROGMEM uint8_t imageFormedInColorPalette[yLen][xLen] = {')
    for row in matrix:
        row_string = '    { ' + ', '.join([str(r) for r in row]) + ' },'
        header_lines.append(row_string)
    header_lines.append('};')
    return header_lines

# 引数を解釈
help = '''
    画像ファイルからカラーパレット形式のheaderファイルを生成する
    '''
parser = argparse.ArgumentParser(description=help)
parser.add_argument('src_image_name', type=str, help='/resource 以下の 画像ファイル名 e.g. gengar32x32.png')
parser.add_argument('--expansion_rate', default=1.0, help='不動小数点で倍率を指定するとリサイズする e.g. --expansion_rate 3.0')

# 引数が意図しない形式であればエラー終了
args = parser.parse_args()

# 引数をパース
src_image_name = str(args.src_image_name)
expansion_rate = float(args.expansion_rate)

# 処理開始メッセージ
print('\033[32m' + 'start processing' + '\033[0m')

# 画像を読み込み
src_image_path = source_path + src_image_name
cv2image = cv2.imread(src_image_path)
print('\033[32m' + 'source image loaded' + '\033[0m')

# 画像をリサイズ
resized_cv2image = resize(cv2image, expansion_rate)

# カラーパレットを生成
color_palette = color_palet(resized_cv2image)
print('\033[32m' + 'color palette has created (' + str(len(color_palette)) + ' colors)' + '\033[0m')

# カラーパレットで表現された画像の行列データを生成
pixels = image_as_palet_code_matrix(resized_cv2image, color_palette)
print('\033[32m' + 'pixel data has created' + '\033[0m')

# カラーパレットをheaderファイル用文字列に変換
color_palette_lines = generate_header_lines_color_palette(color_palette)

# カラーパレットで表現された画像の行列データをheaderファイル用文字列に変換
pixels_lines = genetrate_header_lines_image_formed_color_pallete(pixels)

# Arduino用のheaderファイルを作成
os.makedirs(dist_path, exist_ok=True)
source_image_name_without_extentions = re.sub('\..*', '', src_image_name)
header_file = open(dist_path + source_image_name_without_extentions + '.h', 'w')
for line in color_palette_lines:
    header_file.write(line + '\n')
for line in pixels_lines:
    header_file.write(line + '\n')
header_file.close()
print('\033[32m' + 'header file has created successfully created' + '\033[0m')