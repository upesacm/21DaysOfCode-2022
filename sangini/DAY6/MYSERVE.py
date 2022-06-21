# cook your dish here
t=int(input())
for i in range(t):
    p,q=map(int,input().split())
    s=p+q
    res=s//2
    if res%2==0:
        print("Alice")
    else:
        print("Bob")
    