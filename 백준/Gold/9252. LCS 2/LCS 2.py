import sys
input = sys.stdin.readline

a = input()
b = input()
m=len(a)
n=len(b)
table=[['' for j in range(n)] for i in range(m)]
index = []

for i in range(1, m):
    for j in range(1, n):
        if a[i-1] == b[j-1]:
            table[i][j] = table[i-1][j-1]+a[i-1]
        else:
            if len(table[i-1][j]) > len(table[i][j-1]):
                table[i][j] = table[i-1][j]
            else:
                table[i][j] = table[i][j-1]
print(len(table[m-1][n-1]))
if len(table[m-1][n-1]) != 0:
    print(table[m-1][n-1])