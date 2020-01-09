import cv2

img = cv2.imread("C:/users/DF-Laptop/Downloads/Demo_05.jpg")
cv2.namedWindow("newWindow")
img.imshow("newWindow", img)
