#include <bits/stdc++.h>
using namespace std;

int board[8][8];
int cnt =0;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
bool check[8][8];

void dfs(int x, int y){

    if(x == 7 && y == 7){
        cnt++;
        return;
    }
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if( 1 <= nx && nx <= 7 && 1 <= ny && ny <= 7 && !check[nx][ny] && board[nx][ny] == 0){
            check[nx][ny] = true;
            dfs(nx,ny);
            check[nx][ny] = false;
        }
    }
}

int main(){
    for(int i = 1; i <= 7; i++ ){
        for (int j = 1; j <= 7; j++){
            cin >> board[i][j];
            check[i][j] = false;
        }
    }
    // 시작점도 체크해주자
    check[1][1] = true;
    dfs(1,1);

    cout << cnt;
}