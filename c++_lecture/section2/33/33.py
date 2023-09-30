if __name__=="__main__":
    n = input()
    
    lst = list(map(int, input().split()))
    
    lst.sort(reverse=True)
    
    result = 0
    count = 1;
    back = 0;
    for x in lst:
        if x == back:
            continue
        if count == 3:
            result = x
            break
        count+=1
        back = x

    print(result)