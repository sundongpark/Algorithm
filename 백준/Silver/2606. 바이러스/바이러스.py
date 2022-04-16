def depth_first_search(v, visit, mat):
    global sum
    visit[v] = 1
    sum = sum + 1
    for i in range(1, n+1):
        if visit[i] == 0 and mat[v][i] == 1:
            depth_first_search(i, visit, mat)

n = int(input())
m = int(input())
mat = [[0]*(n+1) for i in range(n+1)]
visit = [0] * (n+1)
sum = 0
for i in range(m):
    a, b = map(int, input().split())
    mat[a][b] = 1
    mat[b][a] = 1

depth_first_search(1, visit, mat)
print(sum - 1)
