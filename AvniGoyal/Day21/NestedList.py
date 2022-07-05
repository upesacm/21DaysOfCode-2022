if __name__ == '__main__':
    scorelist = []
    marks=[]       #marks=[[name,score]......]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        scorelist.append(score)
        marks.append([name,score])
    b=sorted(list(set(scorelist)))[1]
    names=[name for name,score in sorted(marks) if score==b]
    print('\n'.join(names))