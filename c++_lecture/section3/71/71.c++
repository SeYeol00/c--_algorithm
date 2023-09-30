#include <bits/stdc++.h>
using namespace std;

// 이러면 배열의 모든 값들이 0으로 초기화
// bfs면 자동으로 최소 횟수 갱신
bool check[10000 +1] = {0};
// 거리 저장 배열
int dist[10000 + 1] = {0};
int mn = 2147000000;
int s, e;

queue<int> q;

int main(){
    cin >> s >> e;

    check[s] = true;
    q.push(s);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(now == e){
            cout << dist[now];
            // 정지 조건에는 브레이크 걸어야한다.
            break;
        }
        for(int i = 1; i <=3; i++){
            if(i == 1){ // 1이상 10000이하여야 한다.
                        // 다시 돌아가는 루트는 필요없다. 최단 거리 -> bfs
                        // 모든 루트를 원하면 dfs && 백트래킹
                if(!check[now + 1] && 1<= now + 1 && now + 1 <= 10000){
                    check[now + 1] = true;
                    q.push(now+1);
                    dist[now+1] = dist[now] + 1;
                }
            }else if(i==2){
                if(!check[now - 1]&& 1<= now - 1 && now - 1 <= 10000){
                    check[now - 1] = true;
                    q.push(now-1);
                    // 점프를 카운팅 해야한다.
                    dist[now-1] = dist[now] + 1;
                }
            }else if(i==3){
                if(!check[now + 5]&& 1<= now + 5 && now + 5 <= 10000){
                    check[now + 5] = true;
                    q.push(now + 5);
                    // 점프를 카운팅 해야한다.
                    dist[now + 5] = dist[now] + 1;
                }
            }
        }
    }
}