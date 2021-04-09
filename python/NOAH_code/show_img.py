from datetime import time
from PIL import Image

#read the image
im1 = Image.open(r"C:\Users\Anurag\Desktop\NOAH_Practice(repo)\python\NOAH_code\sample.jpg")
#im2 = Image.open("test-image.png")

#show images
im1.show()
time.sleep(2)
#im2.show()