

T = int(input())
for t in range(1,T+1):
    people = int(input())
    stones = list(map(int,input().split()))
    min = 2147000000
    cnt = 1
    for s in stones:
        if s < 0:
           s = s*-1
        if min > s:
            min = s
            cnt=1
        elif min == s:
            cnt+=1
    print(f"#{t} {min} {cnt}")
                