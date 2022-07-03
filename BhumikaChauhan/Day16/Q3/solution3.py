count = 0
i = 0
lst1 = []
while i < 31:
    i = i+6
    if(i>30):
        break
    else:
        lst1.append(i)
        i = i+1
        lst1.append(i)

T = int(input())
for i in range(0, T):
    N = int(input())
    lst = list(map(int, input().split()[:N]))
    for i in lst:
        if (i in lst1):
            pass
        else:
            count += 1
    count = count + len(lst1)
    print(count)
    count = 0
    lst.clear()
