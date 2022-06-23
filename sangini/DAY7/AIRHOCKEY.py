# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    l1=7-a
    l2=7-b
    if l1<l2:
        print(l1)
    elif l2<l1:
        print(l2)
    elif l1==l2:
        print(l1)
    