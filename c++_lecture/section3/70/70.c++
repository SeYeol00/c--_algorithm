#include <bits/stdc++.h>
using namespace std;

int n,m;
queue<int> bfs_queue;
int from, to, mn = 2147000000;
bool check[21];
// 최단 거리 카운팅 배열 -> 핵심
int dist[21];



int main(){
    cin >> n >> m;
    vector<vector<int> > adj(n+1);
    for(int i =0; i < m; i++){
        cin >> from >> to;
        adj[from].push_back(to);
    }

    for(int i = 1; i <= n; i++){
        check[i] = false;
    }

    check[1] = true;
    bfs_queue.push(1);

    // bfs
    while(!bfs_queue.empty()){
        int now = bfs_queue.front();
        bfs_queue.pop();
        
        for(int next : adj[now]){
            if(!check[next]){
                check[next] = true;
                bfs_queue.push(next);
                // 핵심 로직
                // 다음 칸의 거리는 지금 칸 +1 
                dist[next] = dist[now] + 1;
            }   
        }
    }
    for(int i = 2; i <= n; i++){
        cout << i << " : " << dist[i] << endl;
    }
}