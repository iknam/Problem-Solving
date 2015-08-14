#from operator import itemgetter
import sys

dic = {}

n = int(input())

average = 0

for i in range(0, n):
    name = str(input())
    #average = (input() + input() + input()) #/ 3
    average = str(input())
    dic[name] = average[0]
    #print("{:.2f}".format(dic['average']))
    #sorted(dic.iteritems(), key = itemgetter(1), reverse=True)
if name == str(input()):
    print(dic[name])
    #print(average)
