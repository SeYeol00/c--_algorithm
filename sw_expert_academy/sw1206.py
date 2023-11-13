
T = 10
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    n = int(input())
    arr = list(map(int,input().split()))
    cnt = 0
    for i in range(2,n-2):
        mx = max(arr[i-2],arr[i-1],arr[i],arr[i+1],arr[i+2])
        if mx == arr[i]:
            second = max(arr[i-2],arr[i-1],arr[i+1],arr[i+2])
            cnt +=(arr[i] - second)
    
    print(f"#{test_case} {cnt}")