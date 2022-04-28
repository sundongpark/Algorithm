import sys
input = sys.stdin.readline

while True:
    word = input().rstrip()
    if word == '0':
        break
    elif word == word[::-1]:
        print("yes")
    else:
        print("no")