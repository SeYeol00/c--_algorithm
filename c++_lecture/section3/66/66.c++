#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > adjlist(21);
bool check[21];
int n, m, cnt = 0;


void dfs(int index){
    if(index == 5){
        cnt++;
        return;
    }
    for(int next : adjlist[index]){
        if(!check[next]){
            check[next] = true;
            dfs(next);
            // dfs 백트래킹
            check[next] = false;
        }
    }
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        adjlist[a].push_back(b);
    }

    check[1] = true;

    dfs(1);

    cout << cnt;
}