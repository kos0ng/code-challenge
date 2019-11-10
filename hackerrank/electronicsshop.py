#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the getMoneySpent function below.
#
def getMoneySpent(keyboards, drives, b):
    tmp=0
    for i in keyboards:
        for j in drives:
            cost=i+j
            if(cost>tmp and cost<=b):
                tmp=cost
    if(tmp==0):
        return -1
    return tmp

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bnm = raw_input().split()

    b = int(bnm[0])

    n = int(bnm[1])

    m = int(bnm[2])

    keyboards = map(int, raw_input().rstrip().split())

    drives = map(int, raw_input().rstrip().split())

    moneySpent = getMoneySpent(keyboards, drives, b)
    print moneySpent
    # fptr.write(str(moneySpent) + '\n')

    # fptr.close()
