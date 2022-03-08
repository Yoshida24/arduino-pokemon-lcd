import cv2


img = cv2.imread('./img/free.png')
height = img.shape[0]
width = img.shape[1]
img2 = cv2.resize(img , (int(width*0.25), int(height*0.25)))
cv2.imwrite('./image2.png' , img2)