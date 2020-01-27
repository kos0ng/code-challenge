#!/bin/python

import math
import os
import random
import re
import sys

# Complete the squares function below.
def squares(a, b):
	count=0
	for i in range(int(math.ceil(math.sqrt(a))),int(math.sqrt(b))+1):
		print i
		if(i*i<=b):
			count+=1
		else:
			break
	print count


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        ab = raw_input().split()

        a = int(ab[0])

        b = int(ab[1])

        result = squares(a, b)

    #     fptr.write(str(result) + '\n')

    # fptr.close()
