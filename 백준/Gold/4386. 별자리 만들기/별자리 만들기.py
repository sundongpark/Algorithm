import sys
import math
input = sys.stdin.readline
parent = [i for i in range(101)]
rank = [1 for i in range(101)]

def find(v):
    if parent[v] != v:
        parent[v] = find(parent[v])
    return parent[v]

def union(r1, r2):
    if r1 != r2:
        if rank[r1] > rank[r2]:
            parent[r2] = r1
            rank[r1] += rank[r2]
        else:
            parent[r1] = r2
            if rank[r1] == rank[r2]: rank[r2] += rank[r1]

def kruskal(edges, vertices):
    edges = sorted(edges, key = lambda x : x[2])  #E에 속한 m개의 이음선을 가중치의 비내림차순으로 정렬
    f = set()
    n = len(vertices)
    a = 0
    sum = 0
    while len(f) < n-1:
        p = find(edges[a][0])
        q = find(edges[a][1])
        if p != q:
            union(p, q)
            f.add(edges[a])
            sum = sum + edges[a][2]
        a = a + 1
    return sum

edges = set()
vertices = set()
stars = []
v = int(input())
for i in range(v):
    a, b = map(float, input().strip().split())
    stars.append((a, b, i))
    vertices.add(i)
for i in range(v-1):
    for j in range(i+1, v):
        edges.add((i, j, math.sqrt((stars[i][0]-stars[j][0])**2+(stars[i][1]-stars[j][1])**2)))

print(kruskal(edges, vertices))