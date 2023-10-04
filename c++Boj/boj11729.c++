#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > v;
int cnt = 0;

void hanoi(int n, int s, int m, int e){
    if(n < 1){
        return;
    }
    hanoi(n-1, s, e, m);
    cnt++;
    v.push_back(make_pair(s,e));
    hanoi(n-1, m, s, e);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    hanoi(n,1,2,3);
    cout << cnt << '\n';
    for(pair<int,int> p : v){
        cout << p.first << ' ' << p.second << '\n';
    }
}