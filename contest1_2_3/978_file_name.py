n = int(raw_input())
string = raw_input()

delete = 0
count = 0
for i in range(len(string)):
    if string[i] == 'x':
        count = count + 1
        if count >= 3:
            delete +=1
    else:
        count = 0
print delete
