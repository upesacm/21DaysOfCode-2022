# 21doc, day 8, Shiva

# question 1
"""if __name__ == '__main__':
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
    #print("]")"""

# question 2
"""def merge_the_tools(string, k):
    # your code goes here
    #given n will always be multiple of k
    t=[]
    l=0#lenght
    for i in string:
        l+=1
        if i not in t:
            t.append(i)
        if l==k:#reached one end
            print("".join(t))#attach into one string and then display. let seperator be nothing
            t=[]
            l=0#reset values for next iter
            
    
if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)"""

#question 3

# i am unable to do it as of now, ill learn it and do it by tmrw