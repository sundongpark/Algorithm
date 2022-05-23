import sys
n, k = map(int, sys.stdin.readline().split())
dp = [[0]*(k+1) for _ in range(n+1)]
wp = [[0,0]]
for i in range(1, n+1):
    w, v = map(int, sys.stdin.readline().split())
    for j in range(1, k+1):
        if j >= w:
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v)
        else:
            dp[i][j] = dp[i-1][j]
print(dp[n][k])