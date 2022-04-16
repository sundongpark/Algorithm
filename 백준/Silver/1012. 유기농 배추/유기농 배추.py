import sys
sys.setrecursionlimit(10 ** 4)

def search(x, y, mat):
    mat[y][x] = 0
    for i in (-1, 1):
        if mat[y+i][x] == 1:
            search(x, y+i, mat)
        if mat[y][x+i] == 1:
            search(x+i, y, mat)

t = int(input())
for j in range(t):
    m, n, k = map(int, input().split())
    mat = [[0]*(m+1) for i in range(n+1)]

    sum = 0
    for i in range(k):
        a, b = map(int, input().split())
        mat[b][a] = 1
    for x in range(m):
        for y in range(n):
            if mat[y][x]:
                sum = sum + 1
                search(x, y, mat)
    print(sum)