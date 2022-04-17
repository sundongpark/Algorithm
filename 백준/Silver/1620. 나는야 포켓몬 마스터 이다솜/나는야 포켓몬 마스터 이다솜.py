import sys
input = sys.stdin.readline

n, m = map(int, input().split())
pokemon = [0]
pokedic = {}

for i in range(1, n+1):
    pokemon.append(input())
    pokedic[pokemon[i]] = i
for i in range(m):
    q = input()
    try:
        print(pokemon[int(q)], end='')
    except:
        print(pokedic[q])