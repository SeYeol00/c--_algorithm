
T = int(input())
for tc in range(1,T+1):
    check = [0] * 10
    n = int(input())
    n_string = str(n)
    
    for s in n_string:
        check[int(s)] = 1
    
    cnt = 1
    while True:
        flag = 0
        for i in range(10):
            if check[i] == 1:
                flag+=1
        if flag == 10:
            break

        cnt+=1
        now = n*cnt

        n_string = str(now)
        for s in n_string:
            check[int(s)] = 1

    print(f"#{tc} {now}")

        