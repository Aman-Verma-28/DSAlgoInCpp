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
    l.sort()
    sm=sum(l)
    k=sm/n
    x=sm-k*(n-2)
    left=0
    right=n-1
    count=0
    while left<right:
        pass


t=int(input())
# t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
