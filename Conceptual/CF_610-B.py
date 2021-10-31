# import math
from collections import Counter, deque, defaultdict
from math import *
from bisect import bisect_right
mod = 1000000007
# from functools import reduce
# from itertools import permutations
# import queue




def solve():
    n=int(input())
    l=list(map(int,input().split()))
    mini=min(l)
    x=l.index(mini)
    count=0
    for i in range(n-1,-1,-1):
        if l[i]==mini:
            break
        count+=1
    count2=0
    count1=0
    for i in range(x+1,n):
        if l[i]==mini:
            count1=max(count1,count2)
            count2=0
            continue
        count2+=1

    ans=mini*n
    ans+=max(x+count,count2)
    print(ans)

# t=int(input())
t = 10
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
