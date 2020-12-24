import re

input1 = input("Enter an input string:")
m = re.match('[^@]+@[^@]+\.[^@]+',input1)

if m:
    print("True")
else:
    print("False")