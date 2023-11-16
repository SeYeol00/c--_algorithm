T = int(input())
for tc in range(1,T+1):
    n = int(input())
    

    answer = 1

    for x in range(2,n+1):
        if(x%2==0):
            answer -= x
        else:
            answer += x

    print(f"#{tc} {answer}")