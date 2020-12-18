n,k = raw_input().split()
n = int(n)
k = int(k)
r = 2
g = 5
b = 8

s = 0
s = (r*n)//k + int(bool((r*n)%k))
s += (g*n)//k + int(bool((g*n)%k))
s += (b*n)//k + int(bool((b*n)%k))

print(s)
