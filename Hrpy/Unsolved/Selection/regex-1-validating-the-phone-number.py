import re
n = int(input())
s = str(input())

for i in range(0, n):
    #ans = bool(re.match(r"[7-9]", s))
    ans = bool(re.match(r"[]", s))

    if ans == True:
        print("YES")
    if ans == False:
        print("NO")

