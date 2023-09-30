#include <bits/stdc++.h>
using namespace std;

int check[30];

struct Edge{
    int e;
    int cost;
    Edge(int a, int b){
        e=a;
        cost = b;
    }
    // 오름차순 정렬
    // 왜냐면 최대힙이 c++ 디폴트니까 
    bool operator < (const Edge &b)const{
        return cost > b.cost;
    }
};

priority_queue<Edge> pq;
vector<vector<pair<int,int> > > board[30];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i, n, m,  a, b, c, res =0;
    cin >> n >> m;
    // 다잌스트라 & 프림은 인접리스트로 구현
    for(int i = 1; i <= m; i++){
        cin >> a >>b>>c;
        // 무방향 그래프 -> 양방향으로 넣기
        board[a].emplace_back(b,c);
        board[b].emplace_back(a,c);
    }
    // 여기 부터 기억 살리기
    // 우선순위 큐를 이용한다. 언뜻봄면 bfs 느낌
    pq.push(Edge(1,0));
    while(!pq.empty()){
        Edge cur = pq.top();
        pq.pop();
        if(check[cur.e]) continue;
        else{
            check[cur.e]=1;
            res+=cur.cost;
            // 우선순위 큐에 넣기
            for(i=0; i<board[cur.e].size();i++){
                pq.push(Edge(board[cur.e][i].first, cur.cost+next.second));
            }
        }
    }
    cout << res << '\n';
}