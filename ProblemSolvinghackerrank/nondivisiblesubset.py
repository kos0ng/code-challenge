#!/bin/python

import math
import os
import random
import re
import sys

def nonDivisibleSubset(k, s):
        modulo_classes = [0]*k
        print modulo_classes
        for x in s: modulo_classes[x%k] += 1
        print modulo_classes
        l = min(1, modulo_classes[0])
        print l
        l += sum(max(modulo_classes[i],modulo_classes[k-i]) for i in range(1, (k-1)//2+1 ) )
        if k%2 == 0:
            l += min(1, modulo_classes[k//2])
        return l


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = raw_input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    s = map(int, raw_input().rstrip().split())

    result = nonDivisibleSubset(k, s)
    print result
    # print "\n".join(map(str, result))
    # fptr.write(str(result) + '\n')

    # fptr.close()
