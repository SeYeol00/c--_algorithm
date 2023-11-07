
for t in range(1,11):
    dump_cnt = int(input())
    
    arr = list(map(int,input().split()))
    
    result = 0
    while dump_cnt != 0:
        
        mx = -2147000000
        mx_i = 0
        mn = 2147000000
        mn_i = 0
        for i in range(0,len(arr)):
            if mx < arr[i]:
                mx = arr[i]
                mx_i = i
            if mn > arr[i]:
                mn = arr[i]
                mn_i = i
        if arr[mx_i] - arr[mn_i] < 2:
            break
        arr[mx_i]-=1
        arr[mn_i]+=1
        dump_cnt-=1
    
    print(f"#{t} {max(arr)-min(arr)}")