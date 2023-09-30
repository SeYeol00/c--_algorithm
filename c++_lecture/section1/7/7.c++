#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    // 들어올 문자 배열과 나갈 문자열을 생각하자
    // hello my name is seyeol park
    char a[101], b[101];
    // 배열 포인터
    int i, p = 0;
    // fgets 외우기
    fgets(a, 101, stdin);
    
    // 문자열 탐색 조건  '\0'은 null
    for(i=0;a[i]!='\0';i++){
        if (a[i] != ' '){
            // 대문자는 65~90, 소문자는 97~122
            if(a[i] >=65 && a[i] <= 95){
                // 변환 방식은 32를 더하고 빼고
                // 대문자가 먼저다 
                b[p++] = a[i] + 32;
            }else{
                b[p++] = a[i];
            }
        }
    }
    cout << b;
}