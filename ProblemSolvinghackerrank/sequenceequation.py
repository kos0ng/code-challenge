#!/bin/python

import math
import os
import random
import re
import sys

# Complete the permutationEquation function below.
def permutationEquation(p):
	ind=[]
	for i in range(len(p)):
		ind.append(p.index(i+1)+1)
	result=[]
	for i in ind:
		result.append(p.index(i)+1)
	for i in result:
		print i
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    p = map(int, raw_input().rstrip().split())

    result = permutationEquation(p)

    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
