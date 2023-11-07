T = int(input())

for t in range(1,T+1):
    n,m = map(int,input().split())
    
    board = []
    for _ in range(n):
        board.append(list(map(int,input().split())))
    limit = n - m
    mx = -2147000000
    for i in range(0,limit+1):
        for j in range(0,limit+1):
            now = 0
            for k in range(i, i+m):
                for l in range(j, j+m):
                    now += board[k][l]

            if now > mx:
                mx = now

    print(f"#{t} {mx}")