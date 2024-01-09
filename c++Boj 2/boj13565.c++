#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int cnt = 0;
int m,n;

bool check[1000][1000];
vector<vector<int> > board(1000,vector<int>(1000,0));

void dfs(int y, int x){
    if(y == m-1 ){
        cnt++;
        return;
    }
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(!check[ny][nx] && 0<=ny && ny < m 
        // 이걸 분리를 안해줘서 x가 음수만 뜬 것
        && 0<= nx && nx < n && board[ny][nx] == 0){
            check[ny][nx] = true;
            // 백트래킹 쓰지 말것 
            // 백트래킹은 가능한 모든 상황 카운팅일 때 사용
            dfs(ny,nx);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
        check[i][j] = false;
        }
    }


    for(int i = 0; i <m; i++){
        string line;
        cin >> line;
        for(int j = 0; j < n; j++){
            int num = line[j] - 48;
            board[i][j] = num;
        }
    }
    for(int i = 0; i < m; i++){
        if(board[0][i] == 0 && !check[0][i]){
            check[0][i] = true;
            dfs(0,i);
        }
    }
    if(cnt>0){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
}