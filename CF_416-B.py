# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue


def solve():
    m,n=map(int,input().split())
    l=[]
    ans=[]
    for i in range(m):
        l.append(list(map(int,input().split())))
    prev = []

    for i in range(m):
        if i==0:
            ans.append(sum(l[i]))
            cur=0
            for j in range(n):
                cur+=l[i][j]
                prev.append(cur)
        else:
            cur=[]
            for j in range(n):
                if j==0:
                    cur.append(prev[0]+l[i][j])
                else:
                    cur.append(max(prev[j],cur[j-1])+l[i][j])
            ans.append(cur[-1])
            prev=cur.copy()
    print(*ans)


# testcase = int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
