#!/bin/python

import math
import os
import random
import re
import sys

# Complete the cutTheSticks function below.
def cutTheSticks(arr):	
	result=[len(arr)]
	while(len(arr)!=0):
		z=min(arr)
		for i in range(len(arr)):
			arr[i]=arr[i]-z
		for i in range(arr.count(0)):
			arr.remove(0)
		result.append(len(arr))
	return result[:-1]

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    result = cutTheSticks(arr)
    print '\n'.join(map(str,result))
    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
