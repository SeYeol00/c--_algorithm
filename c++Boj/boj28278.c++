#include <bits/stdc++.h>
#define FASTIO cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
using namespace std;


int main(){
    FASTIO

    stack<int> stk;


    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int command;
        cin >> command;

        switch (command){
            case 1:
                int num;
                cin >> num;
                stk.push(num);
                break;
            case 2:
                if(!stk.empty()){
                    int out = stk.top();
                    cout << out << '\n';
                    stk.pop();
                }else{
                    cout << -1 << '\n';
                }
                break;
            case 3:
                cout << stk.size() << '\n';
                break;
            case 4:
                if(stk.empty()){
                    cout << 1 <<'\n'; 
                }else{
                    cout << 0 << '\n';
                }
                break;
            case 5:
                if(!stk.empty()){
                    cout << stk.top() << '\n';
                }else{
                    cout << -1 << '\n';
                }
                break;
            default:
                break;
        }
    }
}