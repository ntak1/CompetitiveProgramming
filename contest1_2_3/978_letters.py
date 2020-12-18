def bin_search(vector,m,dorms):
    begin = 0
    end = len(vector)
    not_finish = True
    dorm = -1
    while(not_finish):
        pos = begin + (end - begin)//2
#         print "pos = ", pos
        # Less
        if m <= vector[pos] and pos > 0 and m <= vector[pos-1]:
            end = pos - 1
        # More
        elif m > vector[pos]:
#             print "ENTERED HERE"
            begin = pos+1
        #Found
        elif m <= vector[pos]:
            dorm = pos + 1
            room = m - vector[pos] + int(dorms[pos])
            print dorm, room
            break
#     print "Saiu"
    return

ndorm, nletters = raw_input().split(' ')
ndorm = int(ndorm)
nletters = int(nletters)

dorms = raw_input().split(' ')
vector = []
vector.append(int(dorms[0]))
acc = int(dorms[0])

for i in range(1,ndorm):
    vector.append(int(dorms[i])+acc)
    acc += int(dorms[i])
    
# print vector
# print dorms
letters = raw_input().split(' ')

i = 0
# print "len letters", len(letters)
while(i < nletters):
    m = int(letters[i])
    bin_search(vector,m,dorms)
    i+=1
