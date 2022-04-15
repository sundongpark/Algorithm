n = int(input())
for i in range(n):
    result = input()
    sum = 0
    score = 0
    for j in result:
        if j == 'O':
            sum = sum + 1
            score = score + sum
        else:
            sum = 0
    print(score)