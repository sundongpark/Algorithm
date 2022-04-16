import sys
input = sys.stdin.readline

n, m = map(int, input().split())
a = set()
b = set()
for i in range(m):
    a.add(input())
for i in range(n):
    b.add(input())
c = sorted(a&b)
print(len(c))
for i in c:
    print(i, end = '')