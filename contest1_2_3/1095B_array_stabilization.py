# array stabilization
n = int(raw_input())
array = raw_input().split(' ')
array = [int(a) for a in array]

max_val = max(array)
min_val = min(array)

if len(array) > 2:
    array.remove(max_val)
    array.remove(min_val)
    new_max = max(array)
    new_min = min(array)
    print min(new_max-min_val, max_val-new_min)
else:
    print "0"
