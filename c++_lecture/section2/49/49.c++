#include <bits/stdc++.h>
using namespace std;



/**
 * @brief 블록의 최댓값
 * 정면에서 본 블록의 숫자 배열, 오른쪽 측면에서 본 블록의 숫자 배열을 먼저 받는다.
 * 위에서 본 높이를 최대로 본다.
 * 2차원 배열을 생성하여 정면 배열의 값을 먼저 각 열에 배정한다.
 * 이후 오른쪽 측면에서 본 값을 현재 배열이랑 비교하여 
 * 한 행의 각 값이 오른쪽 측면에서 본 갯수보다 크다면 오른쪽 측면의 값으로 최댓값을 갱신한다.
 * @return int 
 */

int main(){
    int n;
    cin >> n;

    vector<vector<int> > array(n,vector<int>(n,0));

    vector<int> front(n);
    
    for(int i = 0; i < n; i++){
        cin >> front[i];
    }

    vector<int> right(n);

    for(int i = 0; i < n; i++){
        cin >> right[i];
    }
    
    // 정면 입력하기
    for(int i = 0; i < n;i++ ){
        int frontNum = front[i];
        // [i][j]면 오른쪽으로 돌기 때문에 한 열만 지정하려면 [j][i]를 쓰자
        // 열 번호는 고정해야한다.
        // j를 앞에 둬야 열이 고정된다.
        // 보통 i를 앞에 두면 돌 때 열이 바뀌고 행이 고정이다.
        for(int j = 0; j < n ; j++){
            array[j][i] = frontNum;
        }
    }

    // 우측 관점과 비교
    for(int i = 0; i < n; i++){
        int rightNum = right[i];
        for(int j = 0; j < n; j++){
            if(array[i][j] > rightNum){
                array[i][j] = rightNum;
            }
        }
    }
    // 블록의 최대 갯수
    int result = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result+= array[i][j];
        }
    }
    cout << result << endl;
    
}   