T = int(input())
for i in range(0,T):
    Amin, Bmin, Cmin, Tmin, A, B, C = map(int,input().split())
    if(A>=Amin and B>=Bmin and C>=Cmin and A+B+C>=Tmin):
        print("YES")
    else:
        print("NO")