#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,0};
int dy[] = {0,1};

int board[1001][1001];
int check[1001][1001] = {0};
int n,m, total = 0;

int bfs(int y, int x){
    queue<pair<int, int> > q;

    total += board[y][x];
    check[y][x] = 1;
    q.push(make_pair(y,x));

    while(!q.empty()){
        pair<int, int> now = q.front();
        if(now.first == m-1 && now.second == n -1) break;
        q.pop();

        int xx = -1;
        int yy = -1;
        int l_cost = 2147000000;
        for(int i = 0; i < 2; i++){
            
            int ny = now.first + dy[i];   
            int nx = now.second + dx[i];

            if(0<=ny && ny < m && 0<= nx && nx < n && !check[ny][nx]){
                if(l_cost > board[ny][nx]){
                    yy = ny;
                    xx =nx;
                    l_cost = board[ny][nx];
                }
            }   
        }
        // 무한 루프에 빠질 때는 무조건 넣지 말고 중단점 추가하기
        if (xx != -1 && xx != -1) {
            total += l_cost;
            check[yy][xx] = 1;
            q.push(make_pair(yy,xx));
        }
    }
    return total;
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
        }
    }
    
    
    cout << bfs(0,0) << '\n';

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << check[i][j] << ' ';
        }
        cout << '\n';
    }

}