

T = int(input())
for tc in range(1,T+1):
    a,b,c,d = map(int,input().split())
    
    h = a + c

    if h >12:
        h = h - 12

    m = b + d

    if m > 59:
        h = h + 1
        m = m - 60
    
    if h >12:
        h = h - 12

    print(f"#{tc} {h} {m}")
    