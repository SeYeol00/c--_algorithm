#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Reverses the digits of the given integer.
 *
 * @param num the integer to be reversed
 *
 * @return the reversed integer
 *
 * @throws None
 */
int reverse(int num){
    int ret = 0;
    while(num > 0){
        int d = num%10;
        // 전 루프에서 더한 걸 자릿수를 한 자릿식 올리면서 키운다.
        ret = ret*10 + d;
        num = num / 10;
    }
    return ret;
}

bool isPrime(int x){
    bool flag = true;
    for(int i = 2; i<x;i++){
        if(x%i == 0){
            flag = false;
            break;
        }
   } 
   return flag;
}


int main(){
    int n, num, i, tmp;
    // 숫자가 n개 들어옴
    cin >> n;

    for(i=1; i<=n;i++){
        cin >> num;
        // 숫자 뒤집기
        tmp = reverse(num);
        // reverse한 숫자가 1일 때는 isPrime이 고장난다.
        // 1은 소수가 아니다.!!!!!!!!!!!!!
        if(tmp == 1){
            continue;
        }
        if(isPrime(tmp)){
            cout << tmp << ' ';
        }
    }
    return 0;
}

