n = int(input())
d = []

a, b = input().split()
d.append(int(a))
d.append(int(b))
for i in range(n-1):
    a, b = input().split()
    d.append(int(b))

m=[[0 for j in range(1,n+2)] for i in range(1,n+2)]

for diagonal in range(1, n + 1):
    for i in range(1, n - diagonal + 1):    #대각선 위쪽만 계산
        j = i + diagonal

        m[i][j] = 999999999 #최솟값을 찾기 위해 0으로 초기화되어 있던 값을 임의의 큰 값으로 초기화
        for k in range(i, j):   #i <= k <= j-1
            m[i][j] = min(m[i][j], m[i][k]+m[k+1][j]+d[i-1]*d[k]*d[j])

print(m[1][n])
