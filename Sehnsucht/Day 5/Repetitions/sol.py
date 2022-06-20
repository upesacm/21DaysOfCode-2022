s=input()
l='A'
c=0
ans=1
for i in s:
    if(i==l):
        c=c+1
        ans=max(c,ans)
    else:
        l=i
        c=1
print(ans)
