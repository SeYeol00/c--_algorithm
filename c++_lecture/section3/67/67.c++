#include <bits/stdc++.h>
using namespace std;

// 목적지와 가중치를 담을 pair
vector<vector<pair<int,int> > > adjlist(21);
int n, m, least = 2147000000;
bool check[21];

void dfs(int now, int costs){

    if(now == n){
        if(costs < least){
            least = costs;
        }
        return;
    }
    
    for(pair<int, int> data : adjlist[now]){
        int to, cost;
        // pair 기능을 외우기
        to = data.first;
        cost = data.second;
    
        if(!check[to]){
            check[to] = true;
            dfs(to,costs + cost);
            check[to] = false;
        }
    }
}


int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int from, to, cost;
        cin >> from >> to >> cost;
        //                     make_pair 외우기
        // pair<int, int> data = make_pair(from, to);
        adjlist[from].emplace_back(to,cost);
    }
    check[1] = true;
    dfs(1,0);    

    cout << least;

    
}