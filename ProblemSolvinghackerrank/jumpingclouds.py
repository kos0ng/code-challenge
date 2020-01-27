#!/bin/python

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
	e=100
	i=0
	check=True
	while check:
		if(c[(i+k)%len(c)]==1):
			e-=3
		else:
			e-=1
		i=(i+k)%len(c)
		if(i==0):
			check=False
	print e

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = raw_input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = map(int, raw_input().rstrip().split())

    result = jumpingOnClouds(c, k)
    # fptr.write(str(result) + '\n')

    # fptr.close()
