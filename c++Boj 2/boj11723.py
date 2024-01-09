import sys

S=set()

num=int(sys.stdin.readline().rstrip())

for i in range(num):
                        # 양쪽 공백 문자 제거
    temp=sys.stdin.readline().strip().split()
    if(temp[0]=='add'):
        S.add(int(temp[1]))
    elif(temp[0]=='check'):
        if int(temp[1]) in S:
            print(1)
        else:
            print(0)
    elif(temp[0]=='remove'):
        # discard 외우기
        S.discard(int(temp[1]))
    elif(temp[0]=='toggle'):
        if int(temp[1]) in S:
            S.discard(int(temp[1]))
        else:
            S.add(int(temp[1]))
    elif(temp[0]=='all'):
        S = set([i for i in range(1, 21)])
    else:
        S=set()