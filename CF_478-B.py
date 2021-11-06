# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue

def fun(n):
    if n==0:
        return 0
    return n*(n-1)//2

def solve():
    n,m=map(int,input().split())
    if m==1:
        print(fun(n),fun(n))
        return
    x=n//m
    mini=fun(x)*m
    y=n%m
    mini+=y*x
    maxi=fun(n-m+1)
    print(mini,maxi)





# testcase=int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
