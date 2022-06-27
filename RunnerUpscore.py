n = int(input())
arr = map(int, input().split(" "))


for i in arr:
    mylist = arr.remove(i)
    for j in mylist:
        if i < j:
            break
    else:
        r = i

new_arr = arr.remove(r)
for q in new_arr:
    mylist1 = new_arr.remove(q)
    for s in mylist1:
        if q < s:
            break
    else:
        r1 = q
print(r1)
