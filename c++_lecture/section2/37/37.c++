#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 카카오 채용 문제였음
 * Least Recently Used
 * hit miss 문제
 * 배열의 값을 순회하면서 덮어씌워야하는 문제다.
 * @return int 
 */

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> arr(n); // 캐시 배열
    // hit와 miss

    // 0으로 초기화
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < m; i++){
        // 배열 내부에 존재하는지 검증해야하는 숫자
        // 없으면 넣는다.
        int num;
        cin >> num;
        // hit miss 판별
        // hit면 그 포지션 가져오고, miss는 -1을 반환
        int hit_position = -1;

        for(int j = 0; j < n; j++){
            if(arr[j] == num){
                hit_position = j;
                break;
            }
        }

        if (hit_position == -1){
            // miss라는 것
            // 앞에서 부터 밀고 0에 num을 넣자
            for(int k = 0; k < n-1; i++){
                arr[k+1]  = arr[k];
            }
            arr[0] = num;
        }else{ // hit
            // hit_position까지 밀어야 한다.
            for(int k = 0; k < hit_position; k++){
                arr[k+1] = arr[k];
            }
            arr[0] = num;
        }
    }

    for(int element: arr){
        cout << element << ' ';
    }

}