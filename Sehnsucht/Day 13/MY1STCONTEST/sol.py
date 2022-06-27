lst=[int(x) for x in input().split()]
ans=lst[0]
for i in range(1,len(lst)):
    ans-=lst[i]
    print(ans,end=" ")
