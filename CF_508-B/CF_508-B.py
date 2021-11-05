# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue


def solve():
    s=list(input())
    n=len(s)
    ind=-1
    last=int(s[-1])
    for i in range(n-2,-1,-1):
        if int(s[i])%2==0:
            if ind==-1:
                ind=i
            elif int(s[i])<last:
                ind=i
            # else:
            #     if ind==-1:
            #         s[i],s[-1]=s[-1],s[i]
            #         print("".join(s))
            #         return
            #     s[-1], s[ind] = s[ind], s[-1]
            #     print("".join(s))
            #     return
    if ind==-1:
        print(-1)
        return
    s[-1],s[ind]=s[ind],s[-1]
    print("".join(s))

# testcase=int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
