t = int(raw_input())
i = 0
alphabet = 'abcdefghijklmnopqrstuvwxyz'
while(i<t):
    n,k = raw_input().split(' ')
    n = int(n)
    k = int(k)
    k = min(k,26)
    max_min_freq = n//k
    string = ""
    j = m = 0
    while(j< n):
        p = 0
        while(p<max_min_freq and j < n):
            string += alphabet[m]
            p += 1
            j += 1
        m+= 1
        if m >= k:
            while(j<n):
                string += alphabet[k-1]
                j+=1
        
    print string
    i += 1
