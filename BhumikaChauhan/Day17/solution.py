T = int(input())
for i in range(0,T):
    N = int(input())
    A = list(map(int,input().split()[:N]))
    if (all(element == A[0] for element in A)):
        print(0)
    else:
        print(len(A) - A.count(max(set(A), key = A.count)))