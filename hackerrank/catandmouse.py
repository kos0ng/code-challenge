#!/bin/python

import math
import os
import random
import re
import sys

# Complete the catAndMouse function below.
def catAndMouse(x, y, z):
    tmp1=x-z
    if(tmp1<0):
        tmp1=tmp1*-1
    tmp2=y-z
    if(tmp2<0):
        tmp2=tmp2*-1
    if(tmp1 < tmp2):
        return 'Cat A'
    elif(tmp1==tmp2):
        return 'Mouse C'
    else:
        return 'Cat B'
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        xyz = raw_input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)
        print result
    #     fptr.write(result + '\n')

    # fptr.close()
