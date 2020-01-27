#!/bin/python

import math
import os
import random
import re
import sys

# Complete the libraryFine function below.
def libraryFine(d1, m1, y1, d2, m2, y2):
    result=0
    y=y1-y2
    m=m1-m2
    d=d1-d2
    if(y>0):
        result+=10000
        return result
    elif(m>0 and y>=0):
        result+=500*m
        return result
    elif(d>0 and y>=0 and m>=0):
        result+=15*d
        return result
    return result

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    d1M1Y1 = raw_input().split()

    d1 = int(d1M1Y1[0])

    m1 = int(d1M1Y1[1])

    y1 = int(d1M1Y1[2])

    d2M2Y2 = raw_input().split()

    d2 = int(d2M2Y2[0])

    m2 = int(d2M2Y2[1])

    y2 = int(d2M2Y2[2])

    result = libraryFine(d1, m1, y1, d2, m2, y2)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
