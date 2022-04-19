num = []
sum = 0
for i in range(5):
    num.append(int(input()))
    sum = sum + num[i]
print(sum // 5, sorted(num)[5//2])