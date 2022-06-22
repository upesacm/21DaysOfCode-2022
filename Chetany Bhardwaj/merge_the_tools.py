s = input("Enter the string: ")
lengthOfs = len(s)
k = int(input("Enter the value of k: "))
if not lengthOfs%k == 0:
    print("Entered value of k is not a factor of length of the string s\nExiting!")
    exit()
numberOfSubstrings = int(lengthOfs/k)
referenceNumber = 0
substring = []
finalSubstring = []
for i in range(0,numberOfSubstrings):
    substring.append(s[referenceNumber:referenceNumber+k])
    for character in substring[i]:
        print(character)
        finalSubstring.append("")
        if character not in finalSubstring[i]:
            finalSubstring[i]=finalSubstring[i]+character
    referenceNumber+=k
    print(f"{i}:{finalSubstring[i]}")