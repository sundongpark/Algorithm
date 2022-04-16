import sys
input = sys.stdin.readline

m = int(input())
s = set()

for i in range(m):
    a = input().split()
    if a[0] == 'add':
        s.add(int(a[1]))
    elif a[0] == 'remove':
        s.discard(int(a[1]))
    elif a[0] == 'check':
        if s & set([int(a[1])]):
            print(1)
        else:
            print(0)
    elif a[0] == 'toggle':
        if s & set([int(a[1])]):
            s.discard(int(a[1]))
        else:
            s.add(int(a[1]))
    elif a[0] == 'all':
        s = set(range(1,21))
    elif a[0] == 'empty':
        s = set()