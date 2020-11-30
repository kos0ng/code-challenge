#!/bin/python

import math
import os
import random
import re
import sys

# Complete the flippingBits function below.
def flippingBits(n):
	mask = (1 << 32) - 1
	return ~n&mask
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        n = int(raw_input())

        result = flippingBits(n)
        print result
    #     fptr.write(str(result) + '\n')

    # fptr.close()
