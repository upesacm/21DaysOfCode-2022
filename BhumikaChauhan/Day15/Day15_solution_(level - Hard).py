import numpy as np


def arraymanipulation(x, queries):
    arr = np.zeros(x, dtype=int)
    for a in range(0, len(queries)):
        for b in range(queries[a][0] - 1, queries[a][1]):
            arr[b] = arr[b] + queries[a][2]
    return np.amax(arr)


n, m = map(int, input().split())
L = []
for i in range(0, m):
    l = list(map(int, input().split()))
    # l[0] = left index, l[1] = right index & l[2] = summand
    L.append(l)
array = np.array(L)
Max = arraymanipulation(n, array)
print(Max)
