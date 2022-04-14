n = int(input())
x = [0] * 301
dp = [0] * 301
for i in range(1, n+1):
    x[i] = (int(input()))

dp[1] = x[1]
dp[2] = x[1] + x[2]
dp[3] = max(x[1], x[2]) + x[3]

for i in range(4, n+1):
    dp[i] = max(dp[i-3]+x[i-1], dp[i-2]) + x[i]

print(dp[n])