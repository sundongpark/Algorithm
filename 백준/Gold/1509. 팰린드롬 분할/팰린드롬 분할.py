import sys
input = sys.stdin.readline

word = '0' + input().rstrip()
table=[[0 for j in range(len(word))] for i in range(len(word))]
ans = [0] * (len(word))
for i in range(1, len(word)):
    table[i][i] = 1

for j in range(1, len(word)):
    if j + 1 < len(word):
        if table[j][j] == 1 and word[j] == word[j+1]:
            table[j][j+1] = 1
for i in range(2, len(word)):
    for j in range(1, len(word)):
        if j + i < len(word):
            if table[j+1][j+i-1] == 1 and word[j] == word[j+i]:
                table[j][j+i] = 1
for i in range(1, len(word)):
    if table[1][i]:
        ans[i] = 1
    else:
        ans[i] = ans[i-1]+1
        for j in range(2, i):
            if table[j][i]:
                ans[i] = min(ans[i], ans[j-1]+1)

print(ans[len(word)-1])