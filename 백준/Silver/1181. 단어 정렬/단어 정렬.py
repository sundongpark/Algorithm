import sys
input = sys.stdin.readline

n = int(input())
words = []
for i in range(n):
    words.append(input().rstrip())
words = list(set(words))
words.sort(key = lambda x : (len(x), x))
for w in words:
    print(w)