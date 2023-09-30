

def sum_of_digits(num):
    target = 0;
    while num>10:
        target += num%10
        num = num//10
    return target + num





if __name__ == "__main__":
    start = input()
    lst = map(int,input().split(" "))
    
    max_int = 0
    max_int_num = 0

    for x in lst:
        result = sum_of_digits(x)
        
        if result > max_int:
            max_int = result
            max_int_num = x
        elif result == max_int:
            if max_int_num < x:
                max_int = result
                max_int_num = x

    print(max_int_num)         