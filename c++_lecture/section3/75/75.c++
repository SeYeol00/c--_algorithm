#include <bits/stdc++.h>
using namespace std;

typedef struct data{
    int money;
    int when;

    data(int m, int w){
        money = m;
        when = w;
    }
    // when 기준으로 정렬
    bool operator < (const data  &b)const{
        return when < b.when;
    }
} d;

/**
 * @brief 우선순위 큐 - 최대 힙
 * 3일날 돈 많은 것을 힙에 넣기
 * 그 다음 2일 날 가장 돈 많은 것 
 * 1일 날 돈 많이 주는 것
 * 클래스나 구조체나 동일하지만 큰 차이는 없다.
 * D일 안에 와서 강 연을 해 주면 M만큼의 강연료를 주기로 했다.
 * -> 2일 안이 두 개면 하나는 1일 째에 오고 나머지는 2일 째에 와도 된단 얘기
 * @return int 
 */


int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, i, j, a, b, res = 0, max = -2147000000;

    vector<d> t;
    priority_queue<int> pq;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        // data를 배열에 넣읍시다.
        t.push_back(d(a, b));
        if(b>max){
            // 가장 큰 날짜를 찾아서 저장
            // 가장 늦게 시작하는 날짜를 찾는다.
            max = b;
        }
    }
    // 그리디 알고리즘 -> 무조건 소트
    // 위 오퍼레이터 정의를 통해 어떤 것을 기준으로 정렬할지 정한다.
    // 1일부터 
    sort(t.begin(), t.end());
    // 가장 늦는 날짜부터 출발
    for(i = max; i>=1; i--){
        // 벡터 순회
        for(j = 0; j < n; j++){
            // i는 날짜 만약 i에 맞지 않는다면 넣지 않는다.
            if(t[j].when < i){
                break;
            }
            pq.push(t[j].money);
        }
        // 최대힙
        if(!pq.empty()){
            // 맨 위의 것을 넣는다. 최대 힙으로 돈이 최대
            res += pq.top();
            pq.pop();
        }
    }
    
}