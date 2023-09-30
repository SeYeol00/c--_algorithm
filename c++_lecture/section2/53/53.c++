#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin >> n >> k;


    // stack 사용
    stack<int> stk;

    while(n>0){
        // 스택 -> 선입 후출
        // 먼저 나눈 것이 뒤로 가기 때문에 스택을 쓴다.
        stk.push(n%k);
        n /= k;
    }
    
    while(stk.size() != 0){
        cout << stk.top();
        stk.pop();
    }
    
}