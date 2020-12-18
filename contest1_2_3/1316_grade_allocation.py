t = int(raw_input())
i = 0

while(i < t):
    n,m = raw_input().split(' ')
    n = int(n)
    m = int(m)
    j = 1
    grades = raw_input().split(' ')
    grades = [int(g) for g in grades]
    my_grade = grades[0]
    s = sum(grades[1:])
    print(min(m,s+my_grade))
    i+=1
