#include <bits/stdc++.h>
using namespace std;

int parents[1001] = {0};

int find(int num){
    if(parents[num] == num){
        return num;
    }
    // 재귀로 추적하면서 갱신
    parents[num] = find(parents[num]);
    return parents[num];
}

// union은 c++에서 키워드가 따로 존재한다.....
void unify(int a, int b){
    // 부모가 같지 않을 떄
    if(find(a) != find(b)){
        // b의 부모가 a의 부모가 된다.
        parents[find(a)] = find(b);
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    for(int i = 1; i <=n; i++){
        // 부모를 자기 자신으로 설계
        parents[i] = i;
    }
    // 친구관계 설정
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        unify(a,b);
    }
    int x,y;
    cin >> x >> y;

    if(find(x) != find(y)){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
    }
}