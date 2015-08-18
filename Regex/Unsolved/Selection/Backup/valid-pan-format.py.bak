import re

PAN = []

N = int(input())

for i in range(0, N):
    PAN.append(str(input()))
    if len(PAN[i]) != 10:
        print("yeah")
    char_search = bool(re.search(r"[a-z] +5", PAN[i]))
    int_search = bool(re.search(r"[0-9] + 4", PAN[i]))
    print(char_search);
    print(int_search)
    if char_search == True and int_search == True:
        print("YES")
    else:
        print("NO")
