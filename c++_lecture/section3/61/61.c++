#include <bits/stdc++.h>
using namespace std;

// 핵심은 전역 변수
// 어떤 선언이든 전역변수가 된다.
int n, m;
int cnt = 0;

/**
 * @brief 
 * 이 코드는 makeSpecialNumber라는 재귀 함수를 정의합니다. 
 * 이 함수는 index, sum, numbers라는 
 * 정수 벡터의 참조 및 m이라는 정수를 매개변수로 사용합니다.
 * 
 * 이 함수는 numbers 벡터에서 숫자를 더하거나 빼거나 아예 포함하지 않는 방식으로 
 * 특수한 숫자를 생성하는 것을 목표로 합니다.
 * 
 * 함수는 벡터의 끝에 도달했을 때 (index == n+1) 
 * 또는 합이 목표 값 m에 도달했을 때 중단됩니다.
 * 
 * 만약 합이 m과 같다면, cnt라는 카운터가 증가합니다.
 * 함수는 재귀적으로 자신을 세 번 호출합니다.
 * 
 * 다음 숫자를 합에 더할 때 (index+1, sum+numbers[index]
 * 다음 숫자를 합에서 뺄 때 (index+1, sum-numbers[index]
 * 다음 숫자를 포함하지 않고 합을 유지할 때 (index+1, sum)
 * 
 * @param index 
 * @param sum 
 * @param numbers 
 * @param m 
 */
void makeSpecialNumber(int index, int sum, vector<int>& numbers, int m){
    
    // 실패 루트
    if(index == n+1){
        return;
    }
    // 성공 루트
    if(sum == m){
        cnt++;
        return;
    }
    // 더할 때
    makeSpecialNumber(index+1, sum+numbers[index], numbers, m);
    // 뺄 때
    makeSpecialNumber(index+1, sum-numbers[index], numbers, m);
    // 아예 안 넣을 때
    makeSpecialNumber(index+1, sum, numbers,m);
}

int main(){
    cin >> n >> m;
    
    vector<int> numbers(n,0);

    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    
    makeSpecialNumber(0, 0, numbers,m);

    if(cnt == 0){
        cout << -1;
    }else{
        cout << cnt;
    }
}