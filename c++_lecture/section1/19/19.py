

if __name__ == "__main__":
    n = int(input())
    
    line = list(map(int,input().split()))


    anger_people = 0

    for i in range(0,len(line)-1):
        flag = 1
        for j in range(i+1, len(line)):
            if line[i] < line[j]:
                flag = 0
        if flag == 1:
            anger_people +=1

    print(anger_people)