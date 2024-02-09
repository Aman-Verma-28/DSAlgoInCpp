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
    d={i:0 for i in range(5)}
    for i in range(1,m+1):
        d[i%5]+=1

    count=0
    for i in range(1,n+1):
        if (x := 5-i%5)==5:
            x=0
        count+=d[x]
    print(count)






# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
