T = int(input())
moneys = [50000,10000,5000,1000,500,100,50,10]
for t in range(1,T+1):
    target = int(input())
    print(f"#{t}")
    for m in moneys:
        if m <= target:
            now = target//m
            target = target%m
            print(now, end=" ")
        else:
            print(0, end=" ")
    print()
    