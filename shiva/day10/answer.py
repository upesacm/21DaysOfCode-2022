# 21doc, day 9, Shiva
if __name__ == '__main__':
    x = int(raw_input())
    y = int(raw_input())
    z = int(raw_input())
    n = int(raw_input())
    #
    ans=[]
    #print("[")
    for i in range(0,x+1):
        for j in range(0,y+1):
            for k in range(0,z+1):
                if (i+j+k)!=n:
                    #print([i,j,k])
                    ans.append([i,j,k])
    print(ans)
    #print("]")
