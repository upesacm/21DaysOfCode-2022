inp = input()
P = inp.split()
Dict ={'week1': int(P[0]), 'week2': int(P[1]), 'week3': int(P[2]), 'week4': int(P[3])}
count = 0
for i in Dict:
    if Dict[i] >= 10:
        count += 1
print(count)