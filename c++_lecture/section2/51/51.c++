#include <bits/stdc++.h>
using namespace std;

 
/**
 * @brief DP 연습 
 * dp -> 항상 거의 메모이제이션이라고 생각하자 
 * memo 2차원 배열을 생성해서
 * 최대합을 비교할 것임
 * 
 * 이러한 문제 수식
 * 항상 dp는 수식을 생각해야한다.
 * 이 문제에 최적화된 동적 수식은 무엇일까
 * memo[i][j] = memo[i][j - 1] + memo[i-1][j] - memo[i-1][j-1] + ground[i][j]
 * 
 * 영지 정하는 for문에서는 2행 3열을 든다.
 * memo[i][j] = memo[i-n][j] - memo[i][j-m] + memo[i-n][j-m]
 * 
 * 
 * @return * int 
 */




int main(){
    int h ,w;
    cin >> h >> w;
    // 실제 데이터 용
    vector<vector<int> > ground(h, vector<int>(w,0));
    // 디피 메모용
    vector<vector<int> > memo(h, vector<int>(w,0));
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> ground[i][j];
            memo[i][j] = memo[i-1][j] + memo[i][j-1] - memo[i-1][j-1];
        }
    }

    int n,m;
    cin >> n >> m;

    int max = 0;
    int temp  = 0;


    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            // DP는 결국 점화식이다. memo를 이용해서 점화식을 찾자
            temp = memo[i][j] - memo[i-n][j] - memo[i][j-m] + memo[i-n][j-m];
            if(temp > max){
                max = temp;
            }
        }
    }
    
    cout << max;


}