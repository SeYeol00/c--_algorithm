#include <bits/stdc++.h>
using namespace std;


int n,m;

void dfs(vector<int> lst,int depth){

    if(depth == m){
        for(int num:lst){
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        lst.push_back(i);
        dfs(lst, depth+1);
        // 넣었던 거 빼주기
        lst.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    vector<int> lst;
    dfs(lst,0);
    
}