# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue


def solve():
    n=int(input())
    l=list(map(int,input().split()))
    temp=l.copy()
    # temp=[[l[i],i] for i in range(n)]
    l.sort()
    # temp2=[[l[i],i] for i in range(n)]
    start=-1
    end=-1
    for i in range(n):
        if l[i]!=temp[i]:
            if start==-1:
                start=i
            else:
                end=i
    for i in range((end-start+1)//2):
        temp[start+i],temp[end-i]=temp[end-i],temp[start+i]
    if temp==l:
        print("yes")
        if start==-1:
            print(1,1)
            return
        print(start+1,end+1)
    else:
        print("no")



# testcase = int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
