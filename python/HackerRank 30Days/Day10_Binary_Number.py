import math
import os
import random
import re
import sys


global lst1
lst1=[1]
def decimal_to_binary(n):
    n=n//2
    rem=n%2
    lst1.append(rem)
    if n>1:
        decimal_to_binary(n)
    return lst1

if __name__ == '__main__':
    n = int(input())
    decimal_to_binary(n)
    print(lst1)
    count=0
    for i in range(len(lst1)):
        try:
            if lst1[i]==lst1[i+1]:
                try:
                    if lst1[i+1]==lst1[i+2]:
                        count+=1
                except:
                    count+=1
        except:
            continue
            
    print(count)

