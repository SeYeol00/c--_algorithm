#include <bits/stdc++.h>
using namespace std;

int t;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> t;
    
    for(int i = 0; i < t; i++){
        string line;
        stack<char> stk;
        bool flag = true;
        cin >> line;
        for(char ch : line){
            if(ch == '('){
                stk.push(ch);
            }else if(ch == ')'){
                if(stk.empty()){
                    flag = false;   
                    break;
                }else{
                    stk.pop();
                }
            }
        }
        if(!stk.empty()){
            flag = false;
        }

        if(flag){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    
}