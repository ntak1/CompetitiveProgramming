n = int(raw_input())
string = raw_input()

delete = 0
previous = string[0]
for i in range(1,len(string)):
    if string[i] == previous:
        delete +=1
    previous = string[i]
print delete
