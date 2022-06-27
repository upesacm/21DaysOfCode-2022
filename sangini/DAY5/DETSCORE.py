# cook your dish here
t=int(input())
for i in range(t):
    x,n=map(int,input().split())
    earned=x//10
    res= earned*n
    print(res)