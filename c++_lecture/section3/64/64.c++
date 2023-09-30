#include <bits/stdc++.h>
using namespace std;

bool checklist[21];
int cnt = 0;

void dfs(int index, int destination, vector<vector<int> > adj){
        
    if(index == destination){
        cnt++;
        cout << endl;
    }else{
        for(int next : adj[index]){
            if(!checklist[next]){
                // 방문을 여기서 해주자
                checklist[index] = true;
                cout << next << ' ';
                dfs(next, destination, adj);
                // backtracking -> 모든, 가능한 등등의 워딩
                checklist[index] = false;
            }
        }  
    }
}


int main(){
    int n ,m;
    cin >> n >> m;
    vector<vector<int> > adj(n+1);

    for(int i = 0; i < m; i++){
        int from, end;
        cin >> from >> end;
        // 방향 그래프 & 가중치 없음    
        adj[from].push_back(end);
    }
    cout << endl;

    for(int i = 1; i < adj.size(); i++){
        cout << i << " : ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }


    for(int i = 1; i <= 20; i++){
        checklist[i] = false;
    }

    dfs(1, n, adj);

    cout << cnt;
}