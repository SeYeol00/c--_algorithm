#include <bits/stdc++.h>
using namespace std;
// c++는 최대 힙으로 구현되어 있음 
priority_queue<int> pq;


int main(){
    while(true){
        int command;
        cin >> command;

        if(command == -1){
            break;
        }
        if(command == 0){
            // 우선순위 큐는 탑
            cout << pq.top() << endl;
            pq.pop();
        }else{
            pq.push(command);
        }
    }
}