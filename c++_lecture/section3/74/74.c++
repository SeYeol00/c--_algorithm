#include <bits/stdc++.h>
using namespace std;


priority_queue<int> pq;

int main(){
    while(true){
        int command;
        cin >> command;
        
        if(command == -1){
            break;
        }
        if(command == 0){
            if(pq.empty()){
                cout << -1 << endl;
            }else{
                int num = pq.top() * -1;
                cout << num << endl;
                pq.pop();
            }
        }else{
            pq.push(command * -1);
        }
    }
}