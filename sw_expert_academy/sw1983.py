T = int(input())
for tc in range(1,T+1):
    
    rank = ["A+","A0","A-","B+","B0","B-","C+","C0","C-","D0"]



    n, k = map(int,input().split())
    

    scores = [0]*(n+1)

    for i in range(1,n+1):
        s = list(map(int,input().split()))
        
        total = s[0] * 0.35 + s[1] * 0.45 + s[2] * 0.2
        
        scores[i] = total
    
    target = scores[k]

    scores.sort(reverse=True)


    same = n//10

    for i in range(0,n):
        if scores[i+1] == target:

            print(f"#{tc} {rank[(i+1)//same]}")
            break


    