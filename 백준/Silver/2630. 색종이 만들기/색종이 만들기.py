import sys
sys.setrecursionlimit(10**6)

def sum(a, b, c, d):
    return [a[0]+b[0]+c[0]+d[0], a[1]+b[1]+c[1]+d[1]]

def search(startx, starty, size):
    if size == 1:
        if paper[starty][startx] == 1:
            return [0, 1]
        else:
            return [1, 0]
    white = True
    blue = True
    for i in range(size):
        for j in range(size):
            if paper[starty+i][startx+j] == 0:
                blue = False
            elif paper[starty+i][startx+j] == 1:
                white = False
    if blue:
        return [0, 1]
    elif white:
        return [1, 0]
    else:
        return sum(search(startx, starty, size//2), search(startx+size//2, starty, size//2), search(startx, starty+size//2, size//2), search(startx+size//2, starty+size//2, size//2))

n = int(input())
paper = []
for i in range(n):
    paper.append(list(map(int, input().split())))
ans = search(0, 0, n)
print(ans[0])
print(ans[1])