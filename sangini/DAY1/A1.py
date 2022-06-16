# cook your dish here
 t=int(input())
 for i in range(t):
     x,y,a=map(int,input().split())
     if a>=x and a<y:
         print("Yes")
     else:
         print("No")

