# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if a==b:
        print(a)
    elif a>b:
        print(b)
    else:
        print(a)
