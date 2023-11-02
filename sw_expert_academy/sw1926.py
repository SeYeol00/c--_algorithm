T = int(input())
for t in range(1,T+1):
    cnt = 0
    for i in str(t):
        if "3" in str(i):
            cnt+=1
        elif "6" in str(i):
            cnt+=1
        elif "9" in str(i):
            cnt+=1
    
    if cnt ==0:
        print(t, end=" ")
    else:
        result = "-"*cnt
        print(result, end=" ")
    