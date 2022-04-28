import sys
input = sys.stdin.readline

n = int(input())
num = [0]
num.extend(list(map(int, input().split())))
m = int(input())

table=[[0 for j in range(len(num))] for i in range(len(num))]
for i in range(1, len(num)):
    table[i][i] = 1

for j in range(1, len(num)):
    if j + 1 < len(num):
        if table[j][j] == 1 and num[j] == num[j+1]:
            table[j][j+1] = 1
for i in range(2, len(num)):
    for j in range(1, len(num)):
        if j + i < len(num):
            if table[j+1][j+i-1] == 1 and num[j] == num[j+i]:
                table[j][j+i] = 1

for i in range(m):
    a, b = map(int, input().split())
    print(table[a][b])