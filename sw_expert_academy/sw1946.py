

# 한 꺼번에 다 담고 그냥 절삭해버리기

T = int(input())
for tc in range(1,T+1):
    n = int(input())
    
    value = ""
    for _ in range(n):
        a,b = map(str,input().split())
        value+=a*int(b)

    print(f"#{tc}")
    for i in range(len(value)):
        if i == 0:
            print(value[i],end="")
            continue
        if i%10==0:
            print()
        print(value[i],end="")
    print()