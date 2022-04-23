from collections import deque
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
mlist = []
for i in range(m):
    mlist.append(list(map(int, input().split())))
mlist.sort()
mlist2 = sorted(mlist, key = lambda x : x[1])
ans = mlist[0][0]*(n//6+1)
for i in range(n // 6 + 1):
    ans = min(ans, i*mlist[0][0] + (n-i*6)*mlist2[0][1])
print(ans)