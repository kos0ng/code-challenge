#!/bin/python

import math
import os
import random
import re
import sys

# Complete the maximizingXor function below.
def maximizingXor(l, r):
	tmp=bin(l^r)[2:]
	return int('1'*len(tmp),2)
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    l = int(raw_input())

    r = int(raw_input())

    result = maximizingXor(l, r)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
