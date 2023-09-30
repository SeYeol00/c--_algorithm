#include <bits/stdc++.h>
using namespace std;

int k, summation = 0;


// 최근 -> 스택

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> stk;

    cin >> k;

    for(int i = 0; i < k; i++){
        int num;
        cin >> num;
        if(num == 0){
            summation -= stk.top();
            stk.pop();
        }else{
            stk.push(num);
            summation+=num;
        }
    }
    cout << summation;
}   