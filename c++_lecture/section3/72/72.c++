#include <bits/stdc++.h>
using namespace std;

bool check[1001];
queue<int> q;
int n,k;

// 원형 문제면 그냥 큐에 전부 때려박아도 된다.
// 원형 리스트 -> 큐
// 스택은 탑, 큐는 프론트
int main(){
    cin >> n >> k;

    // 때려 박고 시작하자
    for(int i = 1; i <= n;i++){
        q.push(i);
    }

    // 이러면 큐에 1부터 8까지 모두 들어가 있다.
    while(!q.empty()){
        // k-1만큼 큐를 돌리자, 넣고 빼고
        for(int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        // 이러면 k번째가 온다.
        //k번째에 큐에서 내보내면 된다.
        q.pop();
        
        if(q.size() == 1){
            cout << q.front();
            break;
        }
    }
}