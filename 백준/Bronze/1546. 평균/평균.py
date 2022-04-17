n = int(input())
score = list(map(int, input().split()))
sum = 0
maxscore = max(score)
for s in score:
    sum = sum + s
print(sum/(maxscore*len(score))*100)