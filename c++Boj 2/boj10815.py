


if __name__=="__main__":
    n = int(input())
    arr = list(map(int, input().split()))


    check_dict = {}

    for key in arr:
        if key not in check_dict:
            check_dict[key] = 1
        else:
            check_dict[key] += 1

    m = int(input())
    
    arr2 = list(map(int, input().split()))

    for key in arr2:
        if key in check_dict:
            print(check_dict[key], end=' ')
        else:
            print(0, end=' ')
