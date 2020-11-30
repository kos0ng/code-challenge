#!/bin/python

import math
import os
import random
import re
import sys

# Complete the marcsCakewalk function below.
def marcsCakewalk(calorie):
	calorie.sort(reverse=True)
	result=0
	for i in range(len(calorie)):
		result+=2**i*calorie[i]
	return result
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    calorie = map(int, raw_input().rstrip().split())

    result = marcsCakewalk(calorie)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
