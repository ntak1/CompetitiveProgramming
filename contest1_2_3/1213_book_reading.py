q = int(raw_input())
count = 0
s = 0
while(count < q):
    count += 1
    n, m = raw_input().split(' ')
    n = int(n)
    m = int(m)
    last_digit = m%10
    tab = [(last_digit*i)%10 for i in range(10)]
    s = ((n//m)//10)*sum(tab)
    r = (n//m)%10
    i  = 0
#     print "r = ", r
    while(i < r):
        s += tab[i+1]
        i += 1
    
    print(s)
