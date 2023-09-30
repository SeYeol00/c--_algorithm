

if __name__ == "__main__":
    n,m = map(int, input().split())
    sound =  list(map(int,input().split()))

    time = 0
    max_time = 0
    for i in range(len(sound)):
        if sound[i] > m:
            time+=1
        else:
            if max_time < time:
                max_time = time
            time = 0

    # for문을 탈출하고 한 번 더 체크
    if time > max_time:
        max_time = time
        
    print(max_time)
