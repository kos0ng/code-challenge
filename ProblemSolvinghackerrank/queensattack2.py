#!/bin/python

import math
import os
import random
import re
import sys

# Complete the queensAttack function below.
def queensAttack(n, k, r_q, c_q, obstacles):
    jml=(n-r_q)+(r_q-1)+(n-c_q)+(c_q-1)
    print jml
    print obstacles
if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = raw_input().split()

    n = int(nk[0])

    k = int(nk[1])

    r_qC_q = raw_input().split()

    r_q = int(r_qC_q[0])

    c_q = int(r_qC_q[1])

    obstacles = []

    for _ in xrange(k):
        obstacles.append(map(int, raw_input().rstrip().split()))

    result = queensAttack(n, k, r_q, c_q, obstacles)
    print result

    # fptr.write(str(result) + '\n')

    # fptr.close()
