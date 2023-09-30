


def check_summation(num,answer):
    ret = 0;
    for i in range(num+1):
        ret+=i
    if ret == answer:
        return "YES"
    else:
        return "NO"










if __name__ == "__main__":
    n = int(input())
    
    for _ in range(n):
        num, answer = map(int, input().split(" "))
        print(check_summation(num,answer))