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
    n=inpn()
    l=inpl()
    d=Counter(l)
    if (n1 := len(d))==1:
        outn(0)
        endl()
        return
    if n1==n:
        outn(-1)
        endl()
        return 
    cur=0
    val=-1
    for i,j in d.items():
        if j>cur:
            cur=j
            val=i
    ans=0
    for i,j in d.items():
        if i!=val:
            ans+=j
    ans+=1
    outn(ans)
    endl()




    # testCases = 1
testCases=inpn()
for testCase in range(testCases):
    solution()
