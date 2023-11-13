T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    n = int(input())
    
    memo = [[0]*n for _ in range(n)]
    
    for i in range(n):
        memo[i][0] = 1

    for i in range(n):
        memo[i][i] = 1


    for i in range(2,n):
        for j in range(1,n):
            if memo[i][j] == 0:
                memo[i][j] = memo[i-1][j-1] + memo[i-1][j]
    
    print(f"#{test_case}")
    for i in range(n):
        for j in range(n):
            if memo[i][j] != 0:
                print(memo[i][j], end=" ")
        print()