#!/bin/python

import math
import os
import random
import re
import sys

# Complete the viralAdvertising function below.
def viralAdvertising(n):
	cumulative=0
	shared=5
	for i in range(n):
		liked=shared/2
		cumulative+=liked
		shared=liked*3
	return cumulative
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    result = viralAdvertising(n)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
