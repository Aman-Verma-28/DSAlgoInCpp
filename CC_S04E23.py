from sys import stdin, stdout
from collections import Counter, deque
from math import *
# from functools import reduce
from bisect import bisect_right
from heapq import *
# from itertools import permutations
cin = stdin.readline
cout = stdout.write
mod = 998244353

def inpn():
    return (int(cin()))
def inpl():
    return (list(map(int, cin().split())))
def inpset():
    return (set(map(int, cin().split())))
def inps():
    return cin()[:-1]
def inpv():
    return (map(int, cin().split()))
def inpvf():
    return (map(float, cin().split()))
def outs(s):
    cout(s)
def outn(n):
    cout(str(n))
def outl(l):
    for i in l:
        cout(str(i) + " ")
def outb(s):
    cout(str(s))
def endl():
    cout("\n")

def solution():
    n,p,q=inpv()
    s=inps()
    x=True
    y=False
    curX=0
    curY=0
    for i in range(n):
        if s[i]=='1':
            if x:
                if curX<=p:
                    curX+=1
                else:
                    curX-=1
            else:
                if curY<=q:
                    curY+=1
                else:
                    curY-=1
        else:
            if x:
                if curY<=q:
                    curY+=1
                else:
                    curY-=1
            else:
                if curX<=p:
                    curX+=1
                else:
                    curX-=1
            x=not x
            y=not y
    if curX==p and curY==q:
        outs("Yes\n")
        return
    x = False
    y = True
    curX = 0
    curY = 0
    for i in range(n):
        if s[i] == '1':
            if x:
                if curX <= p:
                    curX += 1
                else:
                    curX -= 1
            else:
                if curY <= q:
                    curY += 1
                else:
                    curY -= 1
        else:
            if x:
                if curY <= q:
                    curY += 1
                else:
                    curY -= 1
            else:
                if curX <= p:
                    curX += 1
                else:
                    curX -= 1
            x = not x
            y = not y
    if curX == p and curY == q:
        outs("Yes\n")
        return
    outs("No\n")




    # testCases = 1
testCases=inpn()
for testCase in range(testCases):
    solution()
