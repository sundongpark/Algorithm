def depth_first_search(v, visit, mat):
    visit[v] = 1
    print(v, end=' ')
    for i in range(1, n+1):
        if visit[i] == 0 and mat[v][i] == 1:
            depth_first_search(i, visit, mat)

def breadth_first_search(v, visit, mat):
    queue = [v]
    visit[v] = 1
    while queue:
        v = queue.pop(0)
        print(v, end=' ')
        for i in range(1, n+1):
            if visit[i] == 0 and mat[v][i] == 1:
                queue.append(i)
                visit[i]=1

n, m, v = map(int, input().split())
mat1 = [[0]*(n+1) for i in range(n+1)]
visit1 = [0] * (n+1)
for i in range(m):
    a, b = map(int, input().split())
    mat1[a][b] = 1
    mat1[b][a] = 1
mat2 = mat1[:]
visit2 = visit1[:]

depth_first_search(v, visit1, mat1)
print()
breadth_first_search(v, visit2, mat2)