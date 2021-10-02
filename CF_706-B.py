# import math
from collections import Counter, deque
from math import *
from bisect import bisect_right
mod = 998244353


#1207-B
#
# from functools import reduce
# from itertools import permutations
# import queue



def solve():
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    q=int(input())
    for i in range(q):
        m=int(input())
        print(bisect_right(l,m))
# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
