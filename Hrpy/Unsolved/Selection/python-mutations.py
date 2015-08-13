S = str(input())
ic = str(input())

i = int(ic[:len(ic) - 2])
c = str(ic[len(ic)])

ans = str("")
ans = S[0:i]
ans += c
ans += S[i+1:]

print (ans)
