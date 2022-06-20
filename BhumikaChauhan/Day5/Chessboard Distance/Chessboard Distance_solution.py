import math
T = int(input())
for i in range(0,T):
    X1,Y1,X2,Y2 = map(int, input().split())
    print(int(max(math.fabs(X1 - X2),math.fabs(Y1 - Y2))))