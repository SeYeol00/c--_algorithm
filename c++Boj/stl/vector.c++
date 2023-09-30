#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 크기가 0인 벡터
    vector<int> vec1;
    // 기본값이 0으로 초기화된 크기가 3인 벡터 선언
    vector<int> vec2(3);
    // 크기가 4이고 모든 값이 1인 벡터 선언
    vector<int> vec3(4, 1);
    // 지정한 값으로 이루어진 크기가 5인 벡터 선언
    // 앞과 뒤가 떨어져 있어야 한다.
    vector<int> vec4;
    // 파이썬 append
    vec4.push_back(1);
    vec4.push_back(5);
    vec4.push_back(6);
    // 마지막 요소 제거
    vec4.pop_back();

    vec4.push_back(3);

    cout << "hello \n";

    for (int i = 0; i < vec4.size(); i++){
        // 인덱싱이 가능하다.
        cout << vec4[i] << "\n";
    }

    // iterator 패턴

    
    
    
}