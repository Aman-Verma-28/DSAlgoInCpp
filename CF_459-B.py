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
    diff=l[-1]-l[0]
    if diff==0:
        print(0,n*(n-1)//2)
        return
    i=0
    while l[i]==l[0]:
        i+=1
    count1=i
    i=n-1
    count2=0
    while l[i]==l[-1]:
        count2+=1
        i-=1
    print(diff,count1*count2)



# testcase = int(input())
testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
