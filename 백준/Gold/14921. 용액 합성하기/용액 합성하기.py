import sys
input = sys.stdin.readline

n = int(input().rstrip())
a = list(map(int, input().rstrip().split()))
l = left = 0
r = right = n - 1
min = 2000000001
while l < r:
    sum = a[l] + a[r]
    if abs(sum) < abs(min):
        left = l
        right = r
        min = sum
    if sum > 0:
        r = r - 1
    elif sum < 0:
        l = l + 1
    else:
        break

print(a[left]+a[right])