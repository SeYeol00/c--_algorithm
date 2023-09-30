#include <iostream>
#include <string>
#include <vector>
using namespace std;



// 카운팅용 배열, 0부터 9까지 인덱스를 활용하여 값을 카운팅 할 것이다.
int ch[10];

int main(){
    // 배열 초기화
    for(int num : ch){
        num = 0;
    }
    //큰 숫자는 long으로 받기 습관화
    long n;
    int i, max=-2147000000, result;
    string a = "hi";
    // string to integer 이거 string에 정의 되어 있다.
    // string은 따로 헤더 파일이 있음
    int x = stoi(a);
    // int -> string
    string p = to_string(x);
    cin >> n;

    while(n > 0){
        ch[n % 10]++;
        n /= 10;
    }

    for(i=0; i < 10; i++){
        if(max< ch[i]){
            max = ch[i];
            result = i;
        }else if (max == ch[i]){
            if(result < i){
                result = i;
            }
        }
    }
    cout << result;
    
}