#!/bin/python

import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    cntapples=0
    cntoranges=0
    for i in apples:
        apple=a+i
        if(apple<=t and apple>=s):
            cntapples+=1
    for i in oranges:
        orange=b+i
        if(orange<=t and orange>=s):
            cntoranges+=1
    a=[str(cntapples),str(cntoranges)]
    return "\n".join(a)
if __name__ == '__main__':
    st = raw_input().split()

    s = int(st[0])

    t = int(st[1])

    ab = raw_input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = raw_input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = map(int, raw_input().rstrip().split())

    oranges = map(int, raw_input().rstrip().split())

    print countApplesAndOranges(s, t, a, b, apples, oranges)
