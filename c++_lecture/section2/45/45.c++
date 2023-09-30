#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 공주 구하기: 시뮬레이션 코드 문제 
 * 원형 배열은 기본적으로 1차원 배열로 표현한다.
 * 
 * @return ** int 
 */


int main(){
    int n, k;
    cin >> n >> k;

    // 배열을 만들어서 왕자를 인덱스에 대칭시켜 비교하자
    // 1번 부터 n번
    vector<int> arr(n+1);

    // 0으로 초기화
    for(int i = 0; i < n+1; i++){
        arr[i] = 0;
    }

    // 특정 위치를 지칭하는 pos
    // n보다 커지는 순간 1로 다시 초기화

    int pos = 0, i, breakpoint = 0, cnt = 0;

    while(1){
        pos++;
        // 원형이다. 만약 배열의 크기를 벗어난다면
        // 이 조건은 while문에서 맨 앞에 존재해야한다.
        if(pos > n){
            pos = 1;
        }

        // 아직 아웃 안 당했으면
        if(arr[pos] == 0){
            //순서를 세기
            cnt++;
            // k와 cnt가 같을 때 
            // 자기 순서에서 같을 때
            if(k == cnt){
                arr[pos] = 1;
                // 다음 왕자는 다시 1부터 시작
                cnt = 0;
                // 한 명 아웃 추가
                breakpoint++;
            }
        }
        // 브레이크 포인트
        if(breakpoint == n-1){
            break;
        }
    }
    // 한 명만 남은 상황
    for(int j = 1; j <= n; j++){
        if(arr[j] == 0){
            cout << j << endl;
            break;
        }
    }

}