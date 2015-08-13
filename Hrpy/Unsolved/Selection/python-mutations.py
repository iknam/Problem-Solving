S = str(input())
ic = str(input())
if len(ic) > 3:
    i = int(
else:
    i = int(ic[0])
    c = str(ic[2])

ans = str("")
ans = S[0:i]
ans += c
ans += S[i+1:]

print (ans)
