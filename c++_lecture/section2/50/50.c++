#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 브루트 포스로 전체 배열에서 6 7 배열을 옮기면서 값이 큰 합을 찾자
 * 브루트 포스 -> 그냥 4중 for문 때려라 ㅋㅋㅋ
 * @return * int 
 */

int counting(vector<vector<int> > ground, int h,int w, int n, int m){    
    int max = 0;
    // 핵심 좌표의 횟수를 기억하자
    // 손으로 직접 세보고 세로에서 해당 영역을 빼고 1 더한 값이라는 걸 알아채야한다.
    // 여기까지는 전체 행렬 안에 있는 조그만 행렬의 이동이라고 보면 된다.
    for(int i = 0; i < h - n + 1; i++){
        for(int j = 0; j < w - m + 1; j++){
            int cnt = 0;
            // 직접 좌표를 세보면 i는 4까지가 최대다
            // -> 무언가를 더해주어야 한다.
            // 0 ~ 6까지의 배열을 맞추려면 n을 더해서 맞춘다.
            // 가로도 마찬가지
            // i부터 출발한다.
            for(int k = i; k < i+n; k++){
                for(int l = j; l < j+m; l++){
                    cnt += ground[k][l];
                }
            }
            if(cnt > max){
                max = cnt;
            }
        }
    }
    return max;
}

int main(){
    int h ,w;
    cin >> h >> w;
    
    vector<vector<int> > ground(h, vector<int>(w,0));
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> ground[i][j];
        }
    }

    int n,m;
    cin >> n >> m;

    cout << counting(ground, h, w, n, m);

    
}