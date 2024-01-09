#include <bits/stdc++.h>
using namespace std;

int parents[1000001];

int find(int a){
    if(parents[a] == a){
        return a;
    }
    parents[a] = find(parents[a]);
    return parents[a];
}

void unite(int a, int b){
    if(find(a)!=find(b)){
        if(a<b){
            // 진짜 루트를 넣어줘라
            // unite할 때 루트를 넘겨줘야한다.
            parents[find(b)] = find(a);
        }else{
            parents[find(a)] = find(b);
        }
    }
}

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i<= n;i++){
        parents[i] = i;
    }
    for(int i = 0; i < m; i++){
        int command, a, b;
        cin >> command >> a >> b;
        if(command == 0){
            if(find(a)==find(b)){
                continue;
            }
            unite(a,b);
        }else if(command == 1){
            if(find(a)!=find(b)){
                cout << "NO" << '\n';
            }else{
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}