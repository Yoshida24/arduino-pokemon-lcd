import cv2
import numpy as np
import sys

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

def image_as_palet_code_matrix(cv2image, color_palet):
    matrix = []
    for row in cv2image:
        result_row = []
        for pixel in row:
            palet_code = list(filter(lambda color: color['color'][0] == pixel[0] and color['color'][1] == pixel[1] and color['color'][2] == pixel[2], color_palet))[0]['index']
            result_row.append(palet_code)
        matrix.append(result_row)
    return matrix

def printColorPalet(color_palet):
    print('// カラーパレット')
    print('const uint8_t colorCodeLen = ' + str(len(color_palet)) +';')
    print('const uint8_t colorParamLen = 4;')
    print('const uint8_t myDictionaryArr[colorCodeLen][colorParamLen] = {')
    for p in color_palet:
        print('    {' + str(p['index']) + ', ' + str(p['color'][2]) + ', ' + str(p['color'][0]) + ', ' + str(p['color'][1]) + '},')
    print('};')

def print_palet_code_matrix(matrix):
    print('// キャラクタ画像')
    print('const uint8_t xLen = ' + str(len(matrix)) + ';')
    print('const uint8_t yLen = ' + str(len(matrix[0])) + ';')
    print('const PROGMEM uint8_t data[yLen][xLen] = {')
    for row in matrix:
        row_string = '    { ' + ', '.join([str(r) for r in row]) + ' },'
        print(row_string)
        # print('     + str(p['index']) +  + str(p['color'][2]) + ', ' + str(p['color'][0]) + ', ' + str(p['color'][1]) + '},')
    print('};')


source_img = sys.argv[1] # './img/094.png' 
img = cv2.imread(source_img)
pal = color_palet(img)
matrix = image_as_palet_code_matrix(img, pal)

printColorPalet(pal)
print_palet_code_matrix(matrix)