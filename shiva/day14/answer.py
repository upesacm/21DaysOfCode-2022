# 21doc, day 14, Shiva 
if __name__ == '__main__':
    N=int(input())
    lst=[]
    for i in range(N):
        cmd=input()
        x=cmd.split()
        if x[0]=="insert":
            #lst[int(x[1])]=x[2]
            lst.insert(int(x[1]),int(x[2]))
        elif x[0]=="print":
            print(lst)
        elif x[0]=="remove":
            lst.remove(int(x[1]))
        elif x[0]=="append":
            lst.append(int(x[1]))
        elif x[0]=="sort":
            lst.sort()
        elif x[0]=="pop":
            lst.pop(len(lst)-1)
        elif x[0]=="reverse":
            lst.reverse()