a, b = map(int, input().split())
mlist = []
for i in range(1, 46):
    for j in range(i):
        mlist.append(i)
print(sum(mlist[a-1:b]))