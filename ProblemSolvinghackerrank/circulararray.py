#!/bin/python

import math
import os
import random
import re
import sys

# Complete the circularArrayRotation function below.
def circularArrayRotation(a, k, queries):
    b=[i for i in a]
    for i in range(len(a)):
        a[(i+k)%(len(a))]=b[i]
    for i in queries:
        print a[i]
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nkq = raw_input().split()

    n = int(nkq[0])

    k = int(nkq[1])

    q = int(nkq[2])

    a = map(int, raw_input().rstrip().split())

    queries = []

    for _ in xrange(q):
        queries_item = int(raw_input())
        queries.append(queries_item)

    result = circularArrayRotation(a, k, queries)
    # print result
    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
