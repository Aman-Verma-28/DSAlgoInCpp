from sys import stdin, stdout
from collections import Counter, deque
from math import *
# from functools import reduce
# from bisect import bisect_right
# from itertools import permutations
cin = stdin.readline
cout = stdout.write
# mod = pow(10, 9) + 7

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
    l1=[]
    for i,j in enumerate(l):
        l1.append([j,i])
    # print(l1)
    ans=[-1]*n
    l1.sort()
    ans2=min(l1[-1][0],n)
    cur=0
    for i in l1:
        if cur==ans2:
            ans[i[1]]=0
        else:
            if cur%i[0]==cur:
                ans[i[1]] = cur
                cur += 1
            else:
                ans[i[1]]=0
    outl(ans)
    endl()



# testCases = 1
testCases=inpn()
for testCase in range(testCases):
    solution()