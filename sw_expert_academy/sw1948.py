day_sum = [0,31,59,90,120,151,181,212,243,273,304,334,365]

T = int(input())
for tc in range(1,T+1):
    a,b,c,d = map(int,input().split())
    front_list = []
    front_list.append(a)
    front_list.append(b)
    back_list = []
    back_list.append(c)
    back_list.append(d)
    

    # 월은 인덱스
    # 맨 앞에서 빼기
    result = (back_list[1] + day_sum[back_list[0]-1]) - (front_list[1] + day_sum[front_list[0]-1]) +1
    print(f"#{tc} {result}")