#!/bin/python

import math
import os
import random
import re
import sys

# Complete the saveThePrisoner function below.
def saveThePrisoner(n, m, s):
    x=m%n+(s-1)
    if(x>n):
        x=x%n
    elif(x==0):
        x=n
    return x
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())
    x=[]
    for t_itr in xrange(t):
        nms = raw_input().split()

        n = int(nms[0])

        m = int(nms[1])

        s = int(nms[2])

        result = saveThePrisoner(n, m, s)
        x.append(result)
    for i in x:
        print i
    #     fptr.write(str(result) + '\n')

    # fptr.close()
