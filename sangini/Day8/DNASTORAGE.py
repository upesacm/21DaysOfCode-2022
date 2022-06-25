# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    j=0
    while n!=0:
        if s[j]=="0" and s[j+1]=="0":
            print("A", end=""),
            j=j+2
            n=n-2
        elif s[j]=="0" and s[j+1]=="1":
            print("T",end=""),
            j=j+2
            n=n-2
        elif s[j]=="1" and s[j+1]=="0":
            print("C",end=""),
            j=j+2
            n=n-2
        elif s[j]=="1" and s[j+1]=="1":
            print("G",end=""),
            j=j+2
            n=n-2
    print("\n")