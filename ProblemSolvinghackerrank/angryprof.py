#!/bin/python

import math
import os
import random
import re
import sys

# Complete the angryProfessor function below.
def angryProfessor(k, a):
    gatelat=0
    for i in a:
        if(i<=0):
            gatelat+=1
    if(gatelat<k):
        return 'YES'
    else:
        return 'NO'
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        nk = raw_input().split()

        n = int(nk[0])

        k = int(nk[1])

        a = map(int, raw_input().rstrip().split())

        result = angryProfessor(k, a)
        print result
        # fptr.write(result + '\n')

    # fptr.close()
