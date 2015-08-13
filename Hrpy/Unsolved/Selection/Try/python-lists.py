list = []
N = int(input())

#print (list[6] + 2)

for i in range(0, N):
    list = str(input())
    if list[0] == 'i' and list[1] == 'n':
        list.insert(int(list[7]), int(list[9]))
    if list[0] == 'p' and list[1] == 'r':
        print (list)

