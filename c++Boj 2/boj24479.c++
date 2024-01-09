#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > graph(100001);
bool check[100001];
int n, m, r;
int Cnt[100001] = {0};
int cnt = 1;

void dfs(int now){
    // 카운트는 계속 누적된 값을 가지고 있음
    Cnt[now] = cnt++;
    for(int next : graph[now]){
        if(!check[next]){
            check[next] = true;
            dfs(next);
            
            // check[next] = false;
        }
    }
}

int main(){
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> r;
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        //양방향
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 오름차순이면 방문 순서도 오름차순이겠지?
    // 탐색을 진행하기 전에 꼭 순서를 저장해야한다.
    for(int i = 1; i <=n;i++){
        sort(graph[i].begin(), graph[i].end());
    }
    check[r] = true;
    dfs(r);
    // Cnt 순서대로 방문을 한것을 체크한다.
    for(int i = 1; i <= n; i++){
        cout << Cnt[i] << "\n";
    }
}