# import math
from collections import Counter, deque, defaultdict
from math import *

# from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue

def isNotPossible(num, n):
    return num>n
def isNotPossible2(num,n):
    return num<n

def solve():
    n=int(input())
    l=list(map(int,input().split()))
    s=input()
    red=[]
    blue=[]
    for i in range(n):
        if s[i]=="R":
            red.append(l[i])
        else:
            blue.append(l[i])
    red.sort()
    blue.sort()
    n1=len(blue)
    n2=len(red)
    for i in range(n):
        if i<n1:
            if isNotPossible(i+1,blue[i]):
                print("NO")
                return
        else:
            if isNotPossible2(i+1,red[i-n1]):
                print("NO")
                return
    print("YES")

testcase=int(input())
# testcase = 1
for num in range(testcase):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
