import sys
input = sys.stdin.readline

n = int(input())
time = []
for i in range(n):
    time.append(list(map(int, input().split())))
time = sorted(time, key=lambda x: (x[1], x[0]))
start = time[0][0]
end = time[0][1]
cnt = 1
for i in range(1, len(time)):
    if time[i][0] >= end:
        cnt = cnt + 1
        start = time[i][0]
        end = time[i][1]
print(cnt)