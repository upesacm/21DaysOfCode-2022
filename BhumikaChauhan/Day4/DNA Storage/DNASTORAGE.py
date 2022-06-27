
Dict = {'A': '00', 'T': '01', 'C': '10', 'G': '11'}
key_list = list(Dict.keys())
val_list = list(Dict.values())
T = int(input())        
for i in range(0,T):
    N = int(input())
    S = input()
    for j in (S[k:k+2] for k in range(0,N,2)):
        print(key_list[val_list.index(j)],end='')
    print("\n")
    
