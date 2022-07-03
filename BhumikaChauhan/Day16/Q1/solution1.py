T = int(input())
for i in range(0,T):
    PA,PB,PC = map(int, input().split())
    if(PB>PA+PC):
        print(PB)
    else:
        print(PA+PC)