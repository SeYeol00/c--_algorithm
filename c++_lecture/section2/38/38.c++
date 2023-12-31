#include <bits/stdc++.h>
using namespace std;


/**
 * @brief 인버전 시퀀스
 * Inversion sequence를 받고
 * 그 수열에 값에 대한 인덱스를 이용하자
 * 마지막 숫자부터 시작해서 원래의 수열을 찾아가는 것
 * 자신보다 큰 숫자가 N-1개 있는 숫자 1부터 자리를 찾아가는 것이 아니라,
 * 항상 자신 앞에 큰 숫자가 없는 숫자 N부터 자리를 잡아가는 것이 더 쉽다.
 * 뒤부터 넣으면 자동적으로 자기 앞에는 큰 수들만 카운팅이 가능하다.
 * 
 * @return ** int 
 */
int main(){
    int n, pos;
    cin >> n;

    // 다중 생성이 가능하다.
    vector<int> is(n+1), os(n+1);
    for(int i = 1; i <= n; i++){
       // is는 인풋으로 초기화하고 
       // 오리지널 시퀀스의 값은 i로 초기화
       cin >> is[i];
       // os = [1,2,3,4,5,6.......,n]
       os[i] = i; 
    }
    // 거꾸로 순회
    // 항상 자신 앞에 큰 숫자가 없는 숫자 N부터 자리를 잡아가는 것이 더 쉽다.
    // 인버전 시퀀스는 뒤에서 부터
    for(int i= n; i>=1; i--){
       int pos = i;
       // 처음부터 현재 i 값의 인버전 시퀀스까지
       // j <= is[i] 이게 핵심인듯 이 숫자만큼 앞으로 땡겨서 들어간다.
       // 인버전 시퀀스는 당기는 횟수를 저장한다.
       for(int j = 1; j <= is[i]; j++){
           // 값을 앞으로 땡기기
           // 뒤로 자리를 잡는 것이다.
           // 그래서 1부터 시작
           // 삽입 정렬 하듯이
           os[pos] = os[pos + 1];
           pos++;
       } 
       // 실제 값을 넣기
       os[pos] = i;
    }
    
    for (int i = 1; i <=n; i++){
        cout << os[i] << ' ';
    }

}