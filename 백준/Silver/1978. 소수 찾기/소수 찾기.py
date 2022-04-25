n = int(input())
num = list(map(int, input().split()))
cnt = 0
for i in num:
    cnt = cnt + 1
    if i == 1:
        cnt = cnt - 1
    else:
        for j in range(2, i//2 + 1):
            if i % j == 0:
                cnt = cnt - 1
                break
print(cnt)