#!/bin/python

import math
import os
import random
import re
import sys

# Complete the twoArrays function below.
def twoArrays(k, A, B):
    A.sort()
    B.sort(reverse=True)
    for i in range(len(A)):
        if(A[i]+B[i]<k):
            return "NO"
    return "YES"

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(raw_input())

    for q_itr in xrange(q):
        nk = raw_input().split()

        n = int(nk[0])

        k = int(nk[1])

        A = map(int, raw_input().rstrip().split())

        B = map(int, raw_input().rstrip().split())

        result = twoArrays(k, A, B)
        print result
    #     fptr.write(result + '\n')

    # fptr.close()
