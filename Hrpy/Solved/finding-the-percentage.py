import operator

dic = {}

n = int(input())

average = 0

for i in range(0, n):
    line = str(input())
    spt = line.split(" ")
    average = (float(spt[1]) + float(spt[2]) + float(spt[3])) / 3
    dic[spt[0]] = average
print('%.2f' % (dic[str(input())]))
