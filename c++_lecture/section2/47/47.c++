#include <bits/stdc++.h>
using namespace std;
// 2차원 배열을 전역변수로 선언하자
// 이렇게 선언하면 모든 값이 0이 된다.
// c++은 인덱스 아웃 올브 레인지가 없다....!
int arr[60][60];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0,1,0,-1};
/**
 * @brief 봉우리 문제 -> 2차원 배열
 * 전역변수로 채우면 다 0이 된다.
 * 상하 좌우 -> dx, dy
 * @return * int 
 */
int main(){
    int n,i,j,k, cnt=0;
    cin >> n;
    // 겉은 0으로 둘러싸여 있으니 1번부터 넣는다.

    // vector로 이차원 배열을 잡고싶다.
    //      한 번 띄워야함       행          열
    vector<vector<int> > map(n+2,vector<int>(n+2,0));

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> arr[i][j];
        }
    }
    
    // 이 문제는 브루트 포스로 탐색할 예정
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            // 탐색용 플래그
            bool flag = false;
            // 4 방향 탐색
            for(k=0;k<4;k++){
                int nx = i + dx[k];
                int ny = j + dy[k];
                if(arr[i][j]<=arr[nx][ny]){
                    // 봉우리가 아니다.
                    // -> break;
                    flag = true;
                    break;
                }
            }
            // 4방향 탐색을 하고 이후에 플래그로 확인
            // 우리는 봉우리인 것을 카운팅해주어야한다.
            if(!flag){
                cnt++;
            }
        }
    }

}