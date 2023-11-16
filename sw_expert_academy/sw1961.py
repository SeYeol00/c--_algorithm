
T = int(input())
for tc in range(1,T+1):
    
    n = int(input())
    arr = []

    for _ in range(n):
        arr.append(list(map(int,input().split())))
    
    print(f"#{tc}")

    arr_90 = [[0]*n for _ in range(n)]
    arr_180 = [[0]*n for _ in range(n)]
    arr_270 = [[0]*n for _ in range(n)]

    # 90도
    # for문 두 개는 그대로, 인덱스만 다르게
    for i in range(n):
        for j in range(n):
            # 뒤에서 가져오기
            arr_90[i][j] = arr[n-1-j][i]
    
    # 180도
    for i in range(n):
        for j in range(n):
            arr_180[i][j] = arr_90[n-1-j][i]

    # 270도
    for i in range(n):
        for j in range(n):
            arr_270[i][j] = arr_180[n-1-j][i]

    
    for i in range(n):
        for a in range(n):
            print(arr_90[i][a],end="")
        print(end = " ")

        for a in range(n):
            print(arr_180[i][a],end="")
        print(end = " ")

        for a in range(n):
            print(arr_270[i][a],end="")
        print()
