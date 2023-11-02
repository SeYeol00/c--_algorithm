
def palindrome(word, left, right):
    if left > right:
        return 1
    
    if word[left] != word[right]:
        return 0
    
    return palindrome(word,left+1,right-1)


T = int(input())
for t in range(1,T+1):
    word = input()
    print(f"#{t} {palindrome(word,0,len(word)-1)}")

    