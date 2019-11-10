#!/bin/python

import math
import os
import random
import re
import sys


#
# Complete the 'maxShared' function below.
#
# The function is expected to return an INTEGER.
# The function accepts WEIGHTED_INTEGER_GRAPH friends as parameter.
#

#
# For the weighted graph, <name>:
#
# 1. The number of nodes is <name>_nodes.
# 2. The number of edges is <name>_edges.
# 3. An edge exists between <name>_from[i] and <name>_to[i]. The weight of the edge is <name>_weight[i].
#
#

def maxShared(friends_nodes, friends_from, friends_to, friends_weight):
    if(friends_nodes>=2 and friends_nodes<=100):
        weight=[]
        connections=[]
        matrix=[]
        for i in range(len(friends_from)):
            if(friends_from[i]!=friends_to[i] and friends_from[i]>=1 and friends_from[i]<=friends_nodes and friends_to[i]>=1 and friends_to[i]<=friends_nodes):
                matrix.append([friends_from[i],friends_to[i],friends_weight[i]])
        for i in friends_weight:
            if(i not in weight and i>=1 and i<=100):
                weight.append(i)
        tmp=[]
        for i in weight:
            tmp2=[]
            for j in matrix:
                if(j[2]==i):
                    tmp2.append(j[0])
                    tmp2.append(j[1])
            tmp.append(tmp2)
        result=[]
        for j,i in enumerate(weight):
            tmp7=[]
            tmp3=[]
            tmp6=[]
            count=0
            for n in range(0,len(tmp[j]),2):
                if([tmp[j][n],tmp[j][n+1]] not in tmp6):
                    tmp6.append([tmp[j][n],tmp[j][n+1]])
            for n in tmp6:
                tmp7.append(n[0])
                tmp7.append(n[1])
            print tmp7
            if(len(tmp7)>2):
                tmp2=[]
                for k in tmp7:
                    if(k not in tmp2):
                        tmp2.append(k)
                        tmp5=[]
                        for l in range(0,len(tmp7),2):
                            tmp4=[tmp7[l],tmp7[l+1]]
                            if(k in tmp4):
                                tmp4.remove(k)
                                tmp5.append(tmp4[0])
                        tmp3=[]
                        if(len(tmp5)>2):
                            for n in range(len(tmp5)):
                                if(n!=len(tmp5)-1):
                                    tmp8=[tmp5[n],tmp5[n+1]]
                                else:
                                    tmp8=[tmp5[n],tmp5[0]]
                                result.append(tmp8)
                        if(len(tmp5)==2):
                            for m in tmp5:
                                tmp3.append(m)
                            result.append(tmp3)            
            for n in range(0,len(tmp7),2):
                result.append([tmp7[n],tmp7[n+1]])
        print result
        tmp_max=0
        max_pair=0
        for i in result:
            if(result.count(i)>tmp_max):
                tmp_max=result.count(i)
                max_pair=i[0]*i[1]
            elif(result.count(i)==tmp_max and i[0]*i[1]>max_pair):
                max_pair=i[0]*i[1]
        print max_pair




if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    friends_nodes, friends_edges = map(int, raw_input().rstrip().split())

    friends_from = [0] * friends_edges
    friends_to = [0] * friends_edges
    friends_weight = [0] * friends_edges

    for i in xrange(friends_edges):
        friends_from[i], friends_to[i], friends_weight[i] = map(int, raw_input().rstrip().split())

    result = maxShared(friends_nodes, friends_from, friends_to, friends_weight)

    result
    # fptr.write(str(result) + '\n')

    # fptr.close()
