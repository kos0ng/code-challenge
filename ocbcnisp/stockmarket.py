#!/bin/python

import math
import os
import random
import re
import sys


#
# Complete the 'predictAnswer' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY stockData
#  2. INTEGER_ARRAY queries
#

def predictAnswer(stockData, queries):
    min_predict=[]
    print "bates"
    if(len(stockData)>=1 and len(stockData)<=10**5 and len(queries)>=1 and len(queries)<=10**5):
        for i in queries:
            if(i<1 and i>10**9):
                break
            tmp_min=0
            length=(len(stockData)-i)
            if(i>length):
                for j in range(1,length+1):
                    minn2=min(stockData[i-j-1],stockData[i-1])
                    minn=min(stockData[i-j-1],stockData[i+j-1])
                    if(minn2<stockData[i-1]):
                        tmp_min=i-j
                        break
                    else:
                        if(minn<stockData[i-1]):
                            if(minn==stockData[i-j-1]):
                                tmp_min=i-j
                                break
                            else:
                                tmp_min=i+j
                                break
                if(tmp_min==0):
                    length=i-length
                    for k in range(1,length):
                        minn=min(stockData[i-k-1],stockData[i-1])
                        if(minn<stockData[i-1]):
                            tmp_min=i-k
                            break
                        else:
                            tmp_min=-1
            else:
                for j in range(1,i+1):
                    minn2=min(stockData[i-j-1],stockData[i-1])
                    minn=min(stockData[i-j-1],stockData[i+j-1])
                    if(minn2<stockData[i-1]):
                        tmp_min=i-j
                        break
                    else:
                        if(minn<stockData[i-1]):
                            if(minn==stockData[i-j-1]):
                               tmp_min=i-j
                               break
                            else:
                                tmp_min=i+j
                                break
                if(tmp_min==0):
                    length=length-i
                    for k in range(1,length):
                        minn=min(stockData[i+k-1],stockData[i-1])
                        if(minn<stockData[i-1]):
                            tmp_min=i+k
                            break
                        else:
                            tmp_min=-1
            print tmp_min




            

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    stockData_count = int(raw_input().strip())

    stockData = []

    for _ in xrange(stockData_count):
        stockData_item = int(raw_input().strip())
        stockData.append(stockData_item)

    queries_count = int(raw_input().strip())

    queries = []

    for _ in xrange(queries_count):
        queries_item = int(raw_input().strip())
        queries.append(queries_item)

    result = predictAnswer(stockData, queries)
    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
