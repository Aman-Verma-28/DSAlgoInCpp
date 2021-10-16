# import math
from collections import Counter, deque, defaultdict
from math import *
# from bisect import bisect_right
mod = 1000000007
# from functools import reduce
# from itertools import permutations
# import queue





def solve():
    s=input()
    n=len(s)
    # CASE - 00 and 50:
    ans=n+1
    hasPrev=-1
    # for i in range(n):
    #     if s[i]=="0":
    #         if hasPrev==-1:
    #             hasPrev=i
    #         else:
    #             ans=min(ans,i-hasPrev-1+n-i-1)
    for i in range(n-1,-1,-1):
        if s[i]=="0":
            if hasPrev==-1:
                hasPrev=i
            else:
                ans=min(ans,n-1-hasPrev+hasPrev-i-1)
                break
        elif s[i]=="5":
            if hasPrev!=-1:
                ans = min(ans, n - 1 - hasPrev + hasPrev - i - 1)
                break

    # CASE - 25 and 75:
    hasPrev=-1
    for i in range(n-1,-1,-1):
        if s[i]=="5":
            if hasPrev==-1:
                hasPrev=i
        elif s[i]=="2" or s[i]=="7":
            if hasPrev!=-1:
                ans = min(ans, n - 1 - hasPrev + hasPrev - i - 1)
                break
    print(ans)












t=int(input())
# t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
