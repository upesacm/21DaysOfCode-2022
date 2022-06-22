import itertools
K , M = input()
k = int(K)
m = int(M)
Lis = list()
S = 0
k = 0
for i in range(k):
    l = list(map(int , input().strip().split(' ')))
    n = l[0]
    Lis.append(l[1:])
    assert len(Lis[i]) == n

for l in itertools.product(*Lis):
    s  = sum([x**2 for x in l])%m
    if s>S:
        S = s 
        k = l 
print(S)