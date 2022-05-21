pascal = [[0] * (j+1) for j in range(101)]
pascal[0][0] = 1
for j in range(1, 101):
    for k in range(len(pascal[j])):
        if j == k or k == 0:
            pascal[j][k] = 1
        else:
            pascal[j][k] = pascal[j-1][k-1] + pascal[j-1][k]

a, b = map(int, input().split())
print(pascal[a][b])