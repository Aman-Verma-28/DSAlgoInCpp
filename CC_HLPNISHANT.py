from sys import stdin, stdout
from collections import Counter, deque
from math import *
# from functools import reduce
from bisect import bisect_right
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

l=[]
for i in range(1,89442//2+1):
    l.append(i*(i+1)//2)
# print(l)


def solution():
    n=inpn()
    x=bisect_right(l,n)
    if l[x-1]==n:
        outn(x*2)
        endl()
    else:
        outn((x+1)*2)
        endl()


# testCases = 1
testCases=inpn()
for testCase in range(testCases):
    solution()
