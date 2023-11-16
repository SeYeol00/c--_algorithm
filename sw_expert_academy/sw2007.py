
T=int(input())
for tc in range(1,T+1):
    
    words = input()

    cnt = 0
    for i in range(1,len(words)):
        if words[0:i] == words[i:i+i]:
            cnt = i
            break
    print(f"#{tc} {cnt}")