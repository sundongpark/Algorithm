n = int(input())
for i in range(n):
    x, s = input().split()
    x = int(x)
    for j in s:
        print(j*x, end='')
    print()