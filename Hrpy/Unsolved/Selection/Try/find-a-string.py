s1 = str(input())
s2 = str(input())

for i in range(0, len(s1)):
    if s2[len(s2) -1 - i] == s1[len(s2) - 1 + i]: # [+i]
        cnt++;

