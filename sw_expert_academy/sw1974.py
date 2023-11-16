
arr = [1,2,3,4,5,6,7,8,9]

T = int(input())
for tc in range(1,T+1):
    sudoku = []
    
    for _ in range(9):
        sudoku.append(list(map(int,input().split())))

    check1 = True
    # 가로
    for i in range(9):
        s = sudoku[i]
        t = set(s)
        if len(t) != len(arr):
            check1 = False
            break

    check2 = True
    # 세로
    for i in range(9):  
        c = []
        for j in range(9):
            c.append(sudoku[j][i])
        t = set(c)
        if len(t) != len(arr):
            check2 = False
            break
    
    check3 = True
    for i in range(0,9,3):
        for j in range(0,9,3):
            c = []
            for k in range(i, i+3):
                for l in range(j, j+3):
                    c.append(sudoku[k][l])
            t = set(c)
            if len(t) != len(arr):
                check3 = False
                break
    if(check1 and check2 and check3):
        print(f"#{tc} {1}")
    else:
        print(f"#{tc} {0}")
    