import sys
sys.setrecursionlimit(10 ** 6)
input = sys.stdin.readline

def search(v, visit, mat):
    visit[v] = 1
    for i in range(len(mat[v])):
        if visit[i] == 0 and mat[v][i] == 1:
            search(i, visit, mat)

n, m = map(int, input().split())
mat = [[0]*(n+1) for i in range(n+1)]
visit = [0] * (n+1)

sum = 0
for i in range(m):
    a, b = map(int, input().split())
    mat[b][a] = mat[a][b] = 1

for i in range(1, n+1):
    if visit[i] == 0:
        sum = sum + 1
        search(i, visit, mat)
print(sum)