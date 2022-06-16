import math
T = int(input())
for i in range(0,T):
    inp = (input())
    L = inp.split()
    MTC = (math.ceil(int(L[0])/6))*int(L[1])  
    #MTC = minimum total cost incurred by the group
    print(MTC)