T = int(input())
for tc in range(1,T+1):
    

    # a = l * p
    # b = if l <= R: q else: q + s(l-R)

    p, q, r, s, w = map(int, input().split())

    result = 0
    a = w * p
    b= 0
    if w<=r:
        b = q
    else:
        b = q + s*(w-r)
    
    if a<b:
        result = a
    else:
        result = b

    print(f"#{tc} {result}")