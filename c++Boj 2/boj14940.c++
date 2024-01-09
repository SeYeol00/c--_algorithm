#include <bits/stdc++.h>
using namespace std;


int dx[]  = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
queue<pair<int, int> > q;
/**
 * @brief bfs 격자 문제
 * 0부터 모든 값 사이의 거리는 
 * 
 * @return * int 
 */
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<vector<int> > dist(n, vector<int>(m, 0));
    vector<vector<int> > board(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 2){
                q.push(make_pair(i,j));
            }
        }
    }

    while(!q.empty()){
        pair<int, int> now = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int ny = now.first + dy[i];
            int nx = now.second + dx[i];

            if(0<=ny&&ny<n&&0<=nx&&nx<m&&board[ny][nx]==1){
                board[ny][nx]=0;
                dist[ny][nx] = dist[now.first][now.second] + 1;
                q.push(make_pair(ny,nx));
            }
        }
    }
    // 경로가 다 막혀서 섬일 때
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 1 && dist[i][j] == 0){
                dist[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //                    ??? 이거 char여야 하나보다.
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}

