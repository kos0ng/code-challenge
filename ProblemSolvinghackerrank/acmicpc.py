#!/bin/python

import math
import os
import random
import re
import sys

# Complete the acmTeam function below.
def d2b(x):
    return bin(x)[2:]

def b2d(binary):       
    return int(binary,2)

def acmTeam(topic):
    arr=[]
    for i in range(len(topic)):
        for j in range(i+1,len(topic)):
            result=d2b(b2d(topic[i])|b2d(topic[j]))
            arr.append(str(result).count('1'))
    print max(arr)
    print arr.count(max(arr))
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = raw_input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in xrange(n):
        topic_item = raw_input()
        topic.append(topic_item)

    result = acmTeam(topic)

    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
