# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue


def solve():
    n,m=map(int,input().split())
    if n==1:
        print(1)
        return 
    if n%2==0:
        x = n // 2
        if m>n//2:
            print(m-1)
        elif m==n//2:
            print(m+1)
        else:
            print(m+1)
        return
    x=n//2
    if True:
        if m>n//2:
            print(m-1)
        else:
            print(m+1)
# testcase=int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
