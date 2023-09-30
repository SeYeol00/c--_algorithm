#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 재귀함수 -> 콜스택
 * 즉 스택을 쓰는 것과 다름이 없다.
 * 
 * @return int 
 */



void binary(int a){
    // 재귀함수를 이용해서 10진수를 2진수로 변환하고 싶어

    if(a > 1){
        binary(a/2);   
    }
    cout << a%2; 
}


int main(){
    int n;
    cin >> n;

    binary(n);
}