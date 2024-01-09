
if __name__ == "__main__":

    n, m = map(int, input().split(" "))

    check_set = set()
    
    for _ in range(n):
        s = input()
        if s not in check_set:
            check_set.add(s)
        else:
            continue
    cnt = 0
    for _ in range(m):
        now = input()
        if now in check_set:
            cnt+=1
        else:
            continue

    print(cnt)