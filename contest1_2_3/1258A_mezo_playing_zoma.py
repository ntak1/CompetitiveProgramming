n = int(raw_input())
path = raw_input()

left = 0
right = 0

for char in path:
    if char == 'L':
        left -=1
    else:
        right +=1


npaths = right - left + 1
print(npaths)
