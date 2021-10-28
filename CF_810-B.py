# import math
from collections import Counter, deque, defaultdict
from math import *
# from bisect import bisect_right
mod = 1000000007
# from functools import reduce
# from itertools import permutations
# import queue

def fun(x):
    i=x[0]
    j=x[1]
    z=min(i,j)
    z1=min(2*i,j)
    return z1-z


def fun2(x):
    return min(x[0],x[1])

def fun3(x):
    return min(2*x[0],x[1])


def solve():
    n,f=map(int,input().split())
    l=[]
    for i in range(n):
        l.append(list(map(int,input().split())))
    l.sort(reverse=True, key=lambda x: fun(x))
    count=0
    cur=0
    for i in range(n):
        if cur<f:
            count+=fun3(l[i])
            cur+=1
        else:
            count+=fun2(l[i])
    print(count)

# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
