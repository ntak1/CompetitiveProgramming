l, r = raw_input().split(' ')
il = int(l)
ir = int(r)

lenght = max(len(l), len(r))
#print(lenght)

l = l.zfill(lenght)
r = r.zfill(lenght)

#print(l)
#print(r)

#numbers = list(range(10))
present = [0,0,0,0,0,0,0,0,0,0]

#print(numbers)
ans = '-1'
for x in range(il,ir+1):
    sx = str(x)
    present = [0,0,0,0,0,0,0,0,0,0]
    found = False
    for i in range(len(sx)):
        present[int(sx[i])] += 1
    if max(present) == 1:
        ans = sx
        break
print(ans)
