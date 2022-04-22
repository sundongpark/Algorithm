from collections import deque
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
num_list = deque(map(int, input().split()))
que = deque(range(1,n+1))
cnt = 0

while True:
    if len(num_list) == 0:
        break
    if que[0] == num_list[0]:
        que.popleft()
        num_list.popleft()
    elif que.index(num_list[0]) > len(que) // 2:
        que.rotate(1)
        cnt = cnt + 1
    else:
        que.rotate(-1)
        cnt = cnt + 1

print(cnt)