#!/bin/python

import math
import os
import random
import re
import sys

# Complete the findMedian function below.
def findMedian(arr):
	arr.sort()
	return arr[len(arr)/2]
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    result = findMedian(arr)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
