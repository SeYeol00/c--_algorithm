
T = int(input())
for tc in range(1,T+1):
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    
    if len(a) > len(b):
        first = a
        second = b
    else:
        first = b
        second = a

    mx = -2147000000

    for i in range(len(first)-len(second)+1):
        s_first = 0 + i
        e_first = len(first) - 1 + i
        s_second = 0
        e_second = len(second) - 1
        now = 0
        while s_second <= e_second:
            now += first[s_first] * second[s_second]
            s_second+=1
            s_first+=1
        if now > mx:
            mx = now
        
    print(f"#{tc} {mx}")

