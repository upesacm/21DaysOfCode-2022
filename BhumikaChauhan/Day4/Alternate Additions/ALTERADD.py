T = int(input())
for i in range(0, T):
    A, B = map(int, input().split())
    if(B-A) % 3 == 0 or (B-A-1) % 3 == 0:
        print('YES')
    else:
        print('NO')
