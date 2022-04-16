import sys
sys.setrecursionlimit(10000)

def z_search(startr, startc, size, r, c, num):
    half = size // 2
    if half == 1:
        num = num + (r-startr)*2+(c-startc)
        print(num)
        return
    else:
        if r < startr + half and c < startc + half:
            z_search(startr, startc, half, r, c, num)
        elif r < startr + half and c >= startc + half:
            z_search(startr, startc + half, half, r, c, num + half**2)
        elif r >= startr + half and c < startc + half:
            z_search(startr + half, startc, half, r, c, num + half**2*2)
        else:
            z_search(startr + half, startc + half, half, r, c, num + half**2*3)

n, r, c = map(int, input().split())
z_search(0, 0, 2**n, r, c, 0)