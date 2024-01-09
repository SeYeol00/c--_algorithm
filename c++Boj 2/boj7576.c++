// #include <bits/stdc++.h>
// using namespace std;

// int m, n;
// int dx[] = {-1,0,1,0};
// int dy[] = {0,1,0,-1};

// int check[1001][1001] = {0};
// vector<vector<int> > board(n+1, vector<int>(m+1));
// queue<pair<int, int> > q;

// // void bfs(){
// //     while (!q.empty()){
// //         pair<int, int> now = q.front();
// //         q.pop();
        
// //         for(int i = 0; i < 4; i++){
// //             int ny = now.first + dy[i];
// //             int nx = now.second + dx[i];

// //             if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && board[ny][nx] == 0){
// //                 // 썩었다.
// //                 board[ny][nx] = 1;
// //                 check[ny][nx] = check[now.first][now.second] + 1;
// //                 q.push(make_pair(ny, nx));
// //             }
// //         }
// //     }
// //     // 탐색 끝
// // }
// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     cin >> m >> n;

    
// //     for(int i= 1; i <= n; i++){
// //         for(int j = 1; j <= m; j++){
// //             cin >> board[i][j];
// //         }
// //     }
    
// //     for(int i= 1; i <= n; i++){
// //         for(int j = 1; j <= m; j++){
// //             if(board[i][j] == 1){
// //                 pair<int, int> first = make_pair(i,j);
// //                 q.push(first);
// //                 bfs();
// //             }
// //         }
// //     }

// //     bool flag = true;
// //     for(int i = 1; i <=n;i++){
// //         for(int j = 1;j <= m; j++){
// //             // 안 익은 토마토가 있다면
// //             if(board[i][j] == 0){
// //                 flag = false;
// //             }
// //         }
// //     }

// //     int result = 0;

// //     if(flag){
// //         for(int i = 1; i <=n;i++){
// //             for(int j = 1;j <= m; j++){
// //                 if(check[i][j]> result){
// //                     result = check[i][j];
// //                 }
// //             }
// //         }
// //         cout << result;
// //     }else{
// //         cout << -1;
// //     }
    
// // }

#include <bits/stdc++.h>
using namespace std;

int m, n;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int check[1001][1001] = {0};
vector<vector<int> > board;

queue<pair<int, int> > q;

void bfs() {
    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = now.first + dy[i];
            int nx = now.second + dx[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[ny][nx] == 0) {
                // 썩었다.
                board[ny][nx] = 1;
                check[ny][nx] = check[now.first][now.second] + 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
    // 탐색 끝
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;

    board.assign(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) {
                pair<int, int> first = make_pair(i, j);
                q.push(first);
            }
        }
    }

    bfs();

    bool flag = true;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // 안 익은 토마토가 있다면
            if (board[i][j] == 0) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }

    int result = 0;

    if (flag) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (check[i][j] > result) {
                    result = check[i][j];
                }
            }
        }
        cout << result;
    } else {
        cout << -1;
    }

    return 0;
}
