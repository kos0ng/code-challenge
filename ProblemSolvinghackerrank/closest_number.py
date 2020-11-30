#!/bin/python

import math
import os
import random
import re
import sys

# Complete the closestNumbers function below.
def closestNumbers(arr):
	arr.sort()
	min_val=99999999999
	res=[]
	for i in range(len(arr)-1):
		tmp=arr[i+1]-arr[i]
		if(tmp<min_val):
			min_val=tmp
			res=[]
			res.append(arr[i])
			res.append(arr[i+1])
		elif(tmp==min_val):
			res.append(arr[i])
			res.append(arr[i+1])
	return res

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    result = closestNumbers(arr)
    print result
    # fptr.write(' '.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
