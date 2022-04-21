import sys
input = sys.stdin.readline

n = int(input())
filename = []

for i in range(n):
    filename.append(input())
if n > 0:
    ans = list(filename[0])
else:
    ans = ''
if n > 1:
    for i in range(len(filename[0])):
        for f in range(1, n):
            if filename[0][i] != filename[f][i]:
                ans[i] = '?'
                break
print(''.join(ans[:-1]))