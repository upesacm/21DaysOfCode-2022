import math
T = int(input())
for i in range(0,T):
    X = int(input())
    if((X%10)%5 != 0):
        print("-1")
    else:
        print((X//10) + math.ceil((X%10)/5 ))
    
