n, k = map(int, input().split())
coin = []
sum = 0
for i in range(n):
    coin.append(int(input()))
coin.sort(reverse=True)
for c in coin:
    if k == 0:
        break
    else:
        num = k // c
        sum = sum + num
        k = k % c
print(sum)