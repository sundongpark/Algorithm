from collections import deque

def search(n, k, visit):
    sec = 0
    queue = deque()
    queue.append((n, sec))
    while queue:
        v, sec = queue.popleft()
        if v == k:
                return sec
        sec = sec + 1
        for i in (v-1, v+1, v*2):
            if 0 <= i <= 100000 and visit[i] == 0:
                visit[i] = 1
                queue.append((i, sec))

n, k = list(map(int, input().split()))
visit = [0] * 100001
print(search(n, k, visit))