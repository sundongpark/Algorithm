import sys
from collections import deque

def search():
    while que:
        y, x = que.popleft()
        for i in (-1, 1):
            if 0 < y+i <= n and mat[y+i][x] == 0:
                    mat[y+i][x] = mat[y][x] + 1
                    que.append([y+i, x])
            if 0 < x+i <= m and mat[y][x+i] == 0:
                    mat[y][x+i] = mat[y][x] + 1
                    que.append([y, x+i])

m, n = map(int, input().split())
visit = [0]
mat = [[0] for i in range(n+1)]
mat[0].extend([0]*m)
for i in range(1, n+1):
    mat[i].extend(map(int, input().split()))

que = deque()
sum = 0

for x in range(1, m+1):
    for y in range(1, n+1):
        if mat[y][x] == 1:
            que.append([y, x])

search()

for x in range(1, m+1):
    for y in range(1, n+1):
        if mat[y][x] == 0:
            print(-1)
            exit(0)
        else:
            sum = max(sum, mat[y][x])

print(sum-1)
