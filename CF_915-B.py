# import math
from collections import Counter, deque, defaultdict
from math import *
# from bisect import bisect_right
mod = 1000000007
# from functools import reduce
# from itertools import permutations
# import queue


def solve():
    n,p,l,r=map(int,input().split())
    if l==1 and r==n:
        print(0)
        return
    if l==1:
        ans=1
        ans+=abs(r-p)
        print(ans)
        return
    if r==n:
        ans=1
        ans+=abs(p-l)
        print(ans)
        return
    ans=2
    ans+=min(abs(r-p),abs(l-p))
    ans+=r-l
    print(ans)
# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
