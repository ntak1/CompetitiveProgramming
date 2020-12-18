

def  main():
    r,g,b = input().split(' ')
    r = int(r)
    g = int(g)
    b = int(b)

    ans = 0
    m = min(min(r,g),b)
    ans += m
    r -= m
    g -= m
    b -= m

    m1 = m2 = 0
    if r == 0:
        m1 = g
        m2 = b
    if g == 0:
        m1 = r
        m2 = b
    if b == 0:
        m1 = r
        m2 = g

    if m1 != 0 and m2 != 0:
        ans += min(min(m1,m2), (m1+m2)//3)

    print(ans)
    return 0


main()
