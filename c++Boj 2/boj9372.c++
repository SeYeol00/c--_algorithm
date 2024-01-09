// 국가는 정점
// 비행기는 간선의 종류
// 최소 간선 -> 신장 트리
// 모든 최소 신장 트리의 간선의 갯수는 정점 - 1개이다.
#include <bits/stdc++.h>
using namespace std;

int parents[1001];

int find(int a){
    if(parents[a] == a){
        return a;
    }
    parents[a] = find(parents[a]);
    return parents[a];
}

void unite(int a, int b){
    if(find(a) != find(b)){
        // b의 루트의 부모에 a의 루트를 꽂아야한다.
        parents[find(b)] = find(a);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n,m, cnt = 0;
        cin >> n >> m;

        for(int i = 1;i<=n;i++){
            parents[i] = i;
        }
        
        for(int j = 0; j < m; j++){
            int a, b;
            cin >> a >> b;
            if(find(a) != find(b)){
                cnt++;
                unite(a,b);
            }
        }
        cout << cnt << '\n';
    }
}