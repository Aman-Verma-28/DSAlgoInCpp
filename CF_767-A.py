# import math
from collections import Counter, deque
from math import *
# from bisect import *
mod = 998244353


#1207-B

# from functools import reduce
# from itertools import permutations
# import queue


# def line1(x,y,n,d):
#     return y-d-x
# def line2(x,y,n,d):
#     return y+d-x
# def line3(x,y,n,d):
#     return y-d+x
# def line4(x,y,n,d):
#     return y+d+x
def solve():
    n=int(input())
    l=list(map(int,input().split()))
    pointer=n-1
    arr=[False]*n
    for i in l:
        if i==pointer+1:
            cur=[]
            arr[pointer]=True
            while pointer>=0 and arr[pointer]:
                cur.append(pointer+1)
                pointer-=1
            print(*cur)
        else:
            print()
            arr[i-1]=True




# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
