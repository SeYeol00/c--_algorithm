#include <bits/stdc++.h>
using namespace std;





/**
 * @brief 올바른 괄호와 같이 스택을 이용하는 문제는
 * 여는 연산자나 괄호를 스택에 넣고
 * 닫는 것이 나오는 순간 pop한다.
 * 카운팅 하여 갯수가 음수면 NO다.
 * 
 * @return * int 
 */
int main(){
    string str;
    cin >> str;

    stack<char> stk;


    int cnt = 0;

    for(char ch : str){
        cout << ch << endl;
        // 만약 문자열이 여는 괄호면 스택에 넣고
        if(ch == '('){
            cnt++;
            cout << "cnt : " << cnt << endl;
            stk.push(ch);
        // 스택이 닫는 괄호면 pop하여 쌍을 맞춘다.
        }else if(ch == ')'){
            cnt--;
            cout << "cnt : " << cnt << endl;
            if(cnt < 0){
                cout << "NO" << endl;
                break;
            }
            stk.pop();
            
        }
    }

    if(cnt == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}