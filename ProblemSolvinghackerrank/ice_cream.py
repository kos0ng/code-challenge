#!/bin/python

import math
import os
import random
import re
import sys

# Complete the icecreamParlor function below.
def icecreamParlor(m, arr):
    for i in range(1,min(m,max(arr))):
        try:
            tmp=arr.index(i)
            if(i==m-i):
                res=[tmp+1,arr[tmp+1:].index(m-i)+tmp+2]
                res.sort()
                return res
            else:
                res=[tmp+1,arr.index(m-i)+1]
                res.sort()
                return res
        except Exception as e:
            continue


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input())

    for t_itr in xrange(t):
        m = int(raw_input())

        n = int(raw_input())

        arr = map(int, raw_input().rstrip().split())

        result = icecreamParlor(m, arr)
        print result
    #     fptr.write(' '.join(map(str, result)))
    #     fptr.write('\n')

    # fptr.close()
