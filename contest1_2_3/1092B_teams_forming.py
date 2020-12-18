n = int(raw_input())
numbers  = raw_input().split(' ')
numbers = [int(i) for i in numbers]
numbers = sorted(numbers)

#print(numbers)

s = 0
for i in range(0,len(numbers),2):
    s += abs(numbers[i] - numbers[i+1])

print s
