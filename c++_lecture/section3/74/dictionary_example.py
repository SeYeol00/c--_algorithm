# "8zerothree2" → 8032
# "seven73nine" → 7739
# "two53eightfour" → 25384
s1 = "8zerothree2"
s2 = "seven73nine"
s3 = "two53eightfour"

def solution(s):
    anwer = []

    alph_to_num={
        "zero":"0",
        "one":"1",
        "two": "2",
        "three":"3",
        "four":"4",
        "five":"5",
        "six":"6",
        "seven":"7",
        "eight":"8",
        "nine":"9"
    }
    # 사전으로 탐색한다.
    # dict.items(), string.replace(a,b)
    for key, value in alph_to_num.items():
        # 이거 좀 사기인듯
        # 사전에 있는 x가 문자열에 있으면 키값으로 바꿔라
        s = s.replace(key,value)
    answer = int(s)
    return answer

print(solution(s1))
print(solution(s2))
print(solution(s3))