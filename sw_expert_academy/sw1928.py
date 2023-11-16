table = []
for i in range(0,26):
    table.append(chr(i+65))
for i in range(0,26):
    table.append(chr(i+97))
for i in range(0,10):
    table.append(str(chr(i+48)))
table.append("+")
table.append("/")

print(type(chr(49)))

T = int(input())
for tc in range(1,T+1):
    answer = ""
    s = input()
    for i in range(len(s)):
        num = table.index(s[i])
        
        binary = ""
        while(num>1):
            binary = str(num%2) + binary
            num = num//2
        binary = str(num%2) + binary
        binary = binary[::-1]
        answer += binary
    # 3바이트 -> 2의 3제곱

    result = ""

    for i in range(0,len(answer)-5,6):
        now = int(answer[i:i+8])
        print(chr(now), end=" ")
        
        # now = now[::-1]
        # sq = 0
        # num = 0
        # for j in range(0,len(now)):
        #     num = num + int(now[j])*(2**sq)
        #     print(num,end=" ")
        #     sq += 1
        # print()
        # result+=chr(num);
    
        
    print(result)