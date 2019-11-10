#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    res=[]
    for i in grades:
        if(i>=0 and i<=100):
            if(i>=38):
                a=((i/5)+1)*5
                if(a-i<=2):
                    res.append(a)
                else:
                    res.append(i)
            else:
                res.append(i)
    return res




if __name__ == '__main__':

    grades_count = int(raw_input().strip())

    grades = []

    for _ in xrange(grades_count):
        grades_item = int(raw_input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)
    for i in result:
        print i