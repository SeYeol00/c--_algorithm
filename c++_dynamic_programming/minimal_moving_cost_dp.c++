#include <bits/stdc++.h>
using namespace std;


int dx[] = {1,0};
int dy[] = {0,1};

int board[1001][1001];
int memo[1001][1001] = {0};
int n,m, total = 0;




int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
        }
    }

    // dp

    // 1단계
    memo[0][0] = board[0][0];

    // 2단계 -> 경계면 최적 부분 답 적재
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            memo[i][0] = memo[i-1][0] + board[i][0];
            memo[0][j] = memo[0][j-1] + board[0][j];
        }
    }

    // 3단계 내부 최적 부분 답 적재
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            memo[i][j] = min(memo[i-1][j],memo[i][j-1]) + board[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout <<  memo[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << memo[m-1][n-1];
}