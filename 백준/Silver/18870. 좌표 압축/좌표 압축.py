n = int(input())
num = []
num.extend(map(int,input().split()))
s = sorted(set(num))
dic = {s[i] : i for i in range(len(s))}
for i in num:
    print(dic[i], end=' ')