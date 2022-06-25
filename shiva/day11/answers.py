# 21doc, day 11, Shiva

#question 1
"""if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    x=list(arr)
    x.sort()
    mx=max(x)
    #print(x)
    x=set(x)
    x.remove(mx)
    print(max(x))"""

#question 2
"""def minion_game(string):
    # your code goes here
    sc={"ke":0, "st":0}
    for i in range(len(string)):
        if string[i] in "AEIOU":
            sc["ke"]+=len(string)-i
        else:
            sc["st"]+=len(string)-i
    if sc["st"]==sc["ke"]:
        print("Draw")
    elif sc["st"]>sc["ke"]:
        #print("%s %s" %("st",sc["st"]))
        print("st",sc["st"])
    else:
        print("ke",sc["ke"])"""