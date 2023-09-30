#include <iostream>
#include <stack>
#include <string>
using namespace std;
/**
 * Checks if the brackets in the given string are balanced.
 *
 * @param str the string to check
 *
 * @return "yes" if the brackets are balanced, "no" otherwise
 *
 * @throws None
 */
string checkBrackets(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            // 푸쉬는 위의 것만 사용한다.
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty() || (c == ')' && s.top() != '(') || (c == ']' && s.top() != '[') || (c == '}' && s.top() != '{')) {
                return "no";
            }
            s.pop();
        }
    }
    // 스택이 비어있는지 없는지로 확인
    // 최종적으로 스택을 검증해서 비어있으면 0인 상황으로 yes 비어있지 않으면 안 닫힌 것으로 no
    return s.empty() ? "yes" : "no";
}

string checkBrackets2(string str) {
    stack<char> sta;
    for(char ch : str){
        if(ch == '('){
            sta.push(ch);
        }else if(ch == ')'){
            // 함수 표시 잘하기
            // 실패 케이스               string이 안 끝났는데 비어있거나 stack의 top이 '('인 경우 현재 ch가 ')'가 아니면 no
            if(sta.empty() || (sta.top() !='(' && ch == ')')){
                return "no";
            }
            // 정상적으로 닫았다면
            sta.pop();
        }
    }
    return sta.empty() ? "yes" : "no";
}

string checkBrackets3(string str){
    int cnt = 0;
    for(char ch : str){
        if (ch == '('){
            cnt++;
        }else if(ch == ')'){
            cnt--;
        }
        if(cnt < 0){
            break;
        }
    }
    if(cnt == 0){
        return "yes\n";
    }
    return "no\n";
}



int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result = checkBrackets(input);
    cout << result << endl;
    return 0;
}