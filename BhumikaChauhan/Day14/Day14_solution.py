T = int(input())
for i in range(0,T):
    P = int(input())
    N = (P//100) + (P%100)
    if N>10 :
        print(-1)
    else :
        print(N)