T = int(input())



for t in range(1,T+1):
    check = [0] * 1001
    num = int(input())
    scores = list(map(int,input().split()))
    
    for s in scores:
        check[s] += 1
    
    mx = max(check)
    result = []
    for i in range(len(check)):
        if check[i] == mx:
            result.append(i)
    
    print(f"#{num} {max(result)}")