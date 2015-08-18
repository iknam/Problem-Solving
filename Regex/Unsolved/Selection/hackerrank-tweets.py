import re

data = list()
ans = 0

N = int(input())

for i in range(0, 10):
  data.append(str(input()))
#  print(data[i])
  if bool(re.search(r"[Hackerrank]", data[i])) == True:
    ans += 1;

print(ans)
