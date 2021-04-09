import sys
import time

st = 0.07 # How fast you want the time in between letters to be (stands for "sleep time"

def sp(str):
    for letter in str:
        sys.stdout.write(letter)
        sys.stdout.flush()
        time.sleep(st)
    print()

# Using it

sp("Your text goes here!")  