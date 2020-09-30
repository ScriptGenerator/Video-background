import cv2
import numpy as np
import os

vid = cv2.VideoCapture('o.mp4')

if not os.path.exists('images'):
    os.makedirs('images')

index = 0
while(True):
    ret, frame = vid.read()
    if not ret:
        break
    name = "C:\\Users\\ahmed\\OneDrive\\images\\frame" + str(index) + '.jpg'
    print ('Creating...' + name)
    cv2.imwrite(name, frame)
    index += 1
