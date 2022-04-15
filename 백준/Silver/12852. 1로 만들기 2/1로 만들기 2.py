x = int(input())

dp = [0] * 1000001
num = [0] * 1000001

dp[1] = 0
dp[2] = 1
dp[3] = 1

for i in range(4, x + 1):
    dp[i] = dp[i-1] + 1
    a = i-1
    if i % 3 == 0 and dp[i//3] + 1 < dp[i]:
        a = i//3
        dp[i] = dp[i//3] + 1
    if i % 2 == 0 and dp[i//2] + 1 < dp[i]:
        a = i//2
        dp[i] = dp[i//2] + 1
    num[i] = a

print(dp[x])

i = x
while i > 1:
    print(i, end=' ')
    i = num[i]
print(1)