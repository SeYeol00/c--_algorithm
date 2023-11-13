dy = [0,1,0,-1]
dx = [1,0,-1,0]
# 우 -> 하 -> 좌 -> 상 순으로 이동

T = int(input())
for tc in range(1,T+1):
    n = int(input())
    
    board = [[0]*n for _ in range(n)]
    check = [[0]*n for _ in range(n)]
    def dfs(y,x,now,dir):
        
        if now == n*n:
            board[y][x] = now
            return
        check[y][x] = 1
        board[y][x] = now

        yy = y + dy[dir]
        xx = x + dx[dir]
        
        # 좌표 확인이 먼저
        if 0<=yy<n and 0<=xx<n and check[yy][xx] == 0 :
            dfs(yy,xx,now+1,dir)

        else:
            # 핵심
            dir = (dir+1)%4
            yy = y + dy[dir]
            xx = x + dx[dir]
            if 0 <= yy < n and 0 <= xx < n:
                dfs(yy, xx, now + 1, dir)

    dfs(0,0,1,0)

    print(f"#{tc}")
    for y in range(n):
        for x in range(n):
            print(board[y][x], end = " ")
        print()

            

        
                
                
                