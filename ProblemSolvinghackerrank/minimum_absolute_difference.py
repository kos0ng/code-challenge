#!/bin/python

import math
import os
import random
import re
import sys

# Complete the minimumAbsoluteDifference function below.
def minimumAbsoluteDifference(arr):
	arr.sort()
	min_val=99999
	for i in range(0,len(arr)-1):
		min_val=min(abs(arr[i]-arr[i+1]),min_val)
	return min_val

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    result = minimumAbsoluteDifference(arr)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
