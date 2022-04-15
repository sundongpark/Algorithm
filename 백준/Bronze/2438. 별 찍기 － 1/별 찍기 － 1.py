n = int(input())

for i in range(1, n):
    for j in range(i):
        print('*', end = '')
    print()
for j in range(n):
        print('*', end = '')
