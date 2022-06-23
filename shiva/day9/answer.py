# 21doc, day 9, Shiva
if __name__ == '__main__':
    lst=[]
    marks=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lst.append([name,score])
        marks.append(score)
        #print(lst)
    #
    lst2=dict(lst)
    
    marks=sorted(set(lst2.values())) # the marks are the values so 
    # first index will have second lowest score now that marks are sorted
    #print(marks)
    names=[]
    for n in lst:
        if n[1]==marks[1]:
            names.append(n[0])
   
    names=sorted(names)
    
    for i in names:
        print(i)
        