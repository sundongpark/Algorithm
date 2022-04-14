n = int(input())

dp = [0, 0, 0, 1, -1, 1, 2, -1]

for i in range(8, n+1):
    if dp[i-3] == -1 and dp[i-5] == -1:
        dp.append(-1)
    elif dp[i-3] == -1:
        dp.append(dp[i-5] + 1)
    elif dp[i-5] == -1:
        dp.append(dp[i-3] + 1)
    else:
        dp.append(min(dp[i-3] + 1, dp[i-5] + 1))
print(dp[n])