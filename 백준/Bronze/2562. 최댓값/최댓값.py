x = []
for i in range(9):
    x.append(int(input()))
print(sorted(x)[-1])
print(x.index(sorted(x)[-1]) + 1)