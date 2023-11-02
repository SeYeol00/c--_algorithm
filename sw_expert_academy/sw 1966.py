T = int(input())

for t in range(1,T+1):
    l = int(input())
    nums = list(map(int,input().split()))
    
    nums.sort()
    print(f"#{t}",end=" ")

    for num in nums:
        print(num,end=" ")
    print()    
    