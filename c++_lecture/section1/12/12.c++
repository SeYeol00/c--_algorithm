#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * @brief 
 * 한 자리 숫자는 9개
 * 두 자리 숫자는 90개
 * 세 자리 숫자는 900개
 * 네 자리 숫자는 9000개
 * .....
 * 이렇게 자리 숫자를 단계로 생각해야한다.
 * @return int 
 */
int main() {
    // ''은 char로 숫자 변환이 가능하다.
    // 반면 ""은 string을 나타내기 때문에 string을 쓰고자 한다면 
    int n, sum = 0, cnt = 1, d=9, res = 0;

    cin >> n;

    // 단계 확인
    while(sum + d < n){
        // 1 * 9 -> 한자리 숫자는ㅇ 9개
        res = res = ( cnt * d ) ;
        // sum은 현재 카운팅하는 숫자 단계를 지칭한다.
        sum = sum + d;
        
        // 다음자리 숫자의 자리 갯수
        cnt++;
        // 다음 자리 숫자의 총 갯수
        d = d*10;
    }
    
    res = res + ((n-sum)*cnt);

    cout << res;
    return 0;
}