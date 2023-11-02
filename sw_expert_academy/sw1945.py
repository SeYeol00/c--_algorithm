T = int(input())

for t in range(1,T+1):
    n = int(input())
    
    two = 0
    three = 0
    five = 0
    seven = 0
    eleven = 0

    while n%10 == 0:
        n = n/10
        two+=1
        five+=1
    
    while n%2 == 0:
        n = n/2
        two+=1
    while n%3 == 0:
        n = n/3
        three+=1
    while n%5 == 0:
        n = n/5
        five+=1
    while n%7 == 0:
        n = n/7
        seven+=1
    while n%11 == 0:
        n = n/11
        eleven+=1

    print(f"#{t} {two} {three} {five} {seven} {eleven}")