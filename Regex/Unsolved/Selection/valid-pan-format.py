import re

PAN = []

N = int(input())

for i in range(0, N):
    PAN.append(str(input()))
    char_match = bool(re.match(r"\D{0}[A-Z]\D{4}", PAN[i]))
    if char_match == True:
        print("ok")
        int_match = bool(re.match(r"\w{5}[0-9]\w{9}", PAN[i]))
    else:
        print("NO")
    if int_match == True:
        print("YES")
    else:
        print("NO")
