from PIL import Image
import numpy as np
import sys

source_img = sys.argv[1] # './img/094.png' 
print('source image: ' + source_img)
print(im.shape)

image = Image.open(source_img)
im = np.array(Image.open(source_img))

data = []
for row in im:
  print(row)
  wk = ''
  wk += '{'
  for pixel in row:
    wk += str(pixel) + ',' # '{' + str(pixel[0]) + ',' + str(pixel[1]) + ',' + str(pixel[2]) + '},'
  wk += '},'
  data.append(wk)

d = np.array(data)

print(data)
pil_img = Image.fromarray(im)
print(pil_img.mode)

sample_file = open("data.txt", mode="a")
try:
    for d in data:
      sample_file.write(d)
finally:
    sample_file.close()


print(image.getpixel((20,20)))