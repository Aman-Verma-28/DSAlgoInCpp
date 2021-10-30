# import math
from collections import Counter, deque, defaultdict
from math import *
from bisect import bisect_right
mod = 1000000007
# from functools import reduce
# from itertools import permutations
# import queue




def solve():
    s=list(input())
    n=len(s)
    if n<26:
        print(-1)
        return
    # d={i:[0 for i in range(26)] for i in range(n)}
    found=False
    for i in range(n):
        if not found:
            s1=set()
            try:
                for j in range(i,i+26):
                    if s[j]!="?":
                        if s[j] in s1:
                            break
                        s1.add(s[j])
                else:
                    found = True
                    l = []
                    for j in range(26):
                        if chr(j + 65) not in s1:
                            l.append(chr(j + 65))

                    for j in range(i, i + 26):
                        if s[j] == "?":
                            s[j] = l.pop()
            except Exception:
                print(-1)
                return

        else:
            break
    if not found:
        print(-1)
        return
    for i in range(n):
        if s[i]=="?":
            s[i]="A"
    print("".join(s))




# t=int(input())
t = 1
for _ in range(t):
    # print("Case #{}: ".format(_ + 1), end="")
    solve()
