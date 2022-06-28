def minion_game(string):
    # your code goes here
    s=len(string)
    vowel=0
    cons=0
    
    for i in range(s):
        if string[i] in "AEIOU":
            vowel+=(s-i)
        else:
            cons+=(s-i)
    
    if vowel<cons:
        print("Stuart " + str(cons))
    elif vowel>cons:
        print("Kevin " + str(vowel))
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)