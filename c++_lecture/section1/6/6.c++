#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string a;
    cin >> a;
    //   결과       약수의 갯수
    int result = 0, cnt = 0;


    for(int i = 0; i < a.length(); i++){
        // 여기서 아스키 코드를 쓰기
        // 0부터 9까지
        if(a[i] >= 48 && a[i]<=57){
            //                  문자열 -> 숫자로 형변환
            result = result*10 + (a[i]-48);
        }
    }
    // 약수의 갯수 구하기
    for(int i = 1; i <=result;i++){
        if(result%i == 0){
            cnt +=1;
        }
    }



    cout << cnt << endl;
}