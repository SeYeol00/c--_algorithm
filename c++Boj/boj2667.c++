#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int cnt = 0;
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

// 선언은 밖에서
vector<vector<int> > board;
vector<vector<int> > check;
vector<int> houses;

void dfs(int y, int x) {
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (0 <= ny && ny < n && 0 <= nx && nx < n && !check[ny][nx] && board[ny][nx] == 1) {
            check[ny][nx] = 1;
            cnt++;
            dfs(ny, nx);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    // 여기서 이니셜라이징
    board.resize(n, vector<int>(n, 0));
    check.resize(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        // 띄어쓰기 안 할 때 조심합시다.
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            // char -> int
            board[i][j] = line[j] - 48;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 && !check[i][j]) {
                cnt = 1; // Reset cnt to 1
                check[i][j] = 1;
                dfs(i, j);
                houses.push_back(cnt);
            }
        }
    }

    sort(houses.begin(), houses.end());

    cout << houses.size() << '\n';

    for (int house : houses) {
        cout << house << '\n';
    }

    return 0;
}