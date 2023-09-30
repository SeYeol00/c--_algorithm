#include <bits/stdc++.h>
using namespace std;


/**
 * @brief 그래프 연결 && 최소비용 -> 크루스칼
 * 1. 정렬
 * 2. 유니온 파인드
 * 3. 코스트 저장
 * 
 * 최소비용의 트리를 만들기
 * 신장 트리
 * 트리는 n개의 정점이 있으면 n-1의 간선만 있으면 된다.
 * 
 * 가중치 값으로 오름차순 정렬하기
 * >> struct로 만들자
 * 
 * 유니온 파인드를 하면서 정점을 연결하고 간선값은 누적한다.
 * 크루스칼 알고리즘은 소팅이 필수
 * 
 * @return int 
 */

struct road{
    int from;
    int to;
    int cost;

    road(int a, int b, int c){
        from = a;
        to = b;
        cost = c;
    }
    // cost 기준으로 정렬
    // const 적읍시다.
    bool operator < (const road &b )const {
        return cost < b.cost;
    }
};

int parents[101] = {0};

int find(int a){
    if(parents[a] == a){
        return a;
    }
    parents[a] = find(parents[a]);
    return parents[a];
}

void unify(int a, int b){
    if(find(a)!=find(b)){
        parents[b] = a;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;


    for(int i = 1; i <= n; i++){
        parents[i] = i;
    }

    // road를 담을 벡터
    vector<road> roads;

    for(int i = 0; i < m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        roads.push_back(road(a,b,c));
    }
    // operator에서 cost 기준으로 정렬
    sort(roads.begin(),roads.end());
    // 정렬을 해버렸으니까 코스트의 걱정은 필요가 없다.

    int costs = 0;
    cout << '\n';
    for(road r : roads){
        cout << r.cost << ' ';
    }
    cout << '\n';

    for(road r : roads){
        int from = r.from;
        int to = r.to;
        int cost = r.cost;
        if(find(from)!=find(to)){
            costs+=cost;
            unify(from,to);   
        }
    }
    
    cout << costs << '\n';
    cout << '\n';

    for(int i = 1; i <= n; i++){
        cout << parents[i] << ' ';
    }
}