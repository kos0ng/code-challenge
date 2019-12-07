#!/bin/python

import math
import os
import random
import re
import sys

# Complete the beautifulDays function below.
def beautifulDays(i, j, k):
	counter=0
	for x in range(i,j+1):
		y=int(str(x)[::-1])-x
		if(y<0):
			y=y*-1
		if(y%k==0):
			counter+=1
	return counter

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ijk = raw_input().split()

    i = int(ijk[0])

    j = int(ijk[1])

    k = int(ijk[2])

    result = beautifulDays(i, j, k)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
