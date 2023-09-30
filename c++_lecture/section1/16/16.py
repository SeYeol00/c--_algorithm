

if __name__ == "__main__":
    a = input()
    b = input()

    a_dict ={}
    b_dict ={}
    
    for alph in a:
        if alph in a_dict:
            a_dict[alph] +=1
        # 아직 키값이 없다면 초기화해주어야한다.
        else:
            a_dict[alph] =1

    for alph in b:
        if alph in b_dict:
            b_dict[alph] +=1
        # 아직 키값이 없다면 초기화해주어야한다.
        else:
            b_dict[alph] =1

    a_cnt = len(a_dict.keys())
    b_cnt = len(b_dict.keys())

    flag = True;
    if a_cnt!=b_cnt:
        flag = False
    else:
        for key in a_dict.keys():
            if key in b_dict and a_dict[key]==b_dict[key]:
                continue
            else:
                flag = False
                break    
    if flag:
        print("YES")
    else:
        print("NO")
    
        

    
        
            

    