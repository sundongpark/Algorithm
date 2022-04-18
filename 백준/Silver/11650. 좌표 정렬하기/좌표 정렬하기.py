import sys
input = sys.stdin.readline

n = int(input())
num = []
for i in range(n):
    num.append(list(map(int, input().split())))
num.sort()
for i in num:
    print(i[0], i[1])