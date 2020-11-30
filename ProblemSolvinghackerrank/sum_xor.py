#!/bin/python

import math
import os
import random
import re
import sys

# Complete the sumXor function below.
def sumXor(n):
    count = 0
    while n:
        if n % 2 == 0:
            count += 1
        n = n / 2
    return 2**count

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input().strip())

    result = sumXor(n)
    print result
    # fptr.write(str(result) + '\n')

    # fptr.close()
