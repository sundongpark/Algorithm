import sys
input = sys.stdin.readline
parent = [i for i in range(10001)]
rank = [1 for i in range(10001)]

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
v, e = map(int, input().strip().split())
for i in range(e):
    a, b, c = map(int, input().strip().split())
    edges.add((a, b, c))
    vertices.add(a)
    vertices.add(b)

print(kruskal(edges, vertices))