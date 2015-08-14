import re
n = int(input())

for i in range(0, n):
    ans = bool(re.match(r"[7-9]", str(input())))

    if ans == True:
        print("YES")
    if ans == False:
        print("NO")

