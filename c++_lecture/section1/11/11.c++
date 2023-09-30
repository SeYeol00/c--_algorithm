#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int digit_count(int target){
    int cnt = 0;

    // 자릿수의 갯수를 카운팅하면 그개 숫자 사용 횟수다.
    while(target > 0){
        target = target/10;
        cnt++;
    }
    return cnt;
}



int main(){
    int n, result=0;

    cin >> n;

    for(int i = 1; i <=n; i++){
        result += digit_count(i);
    }
    cout << result;
}