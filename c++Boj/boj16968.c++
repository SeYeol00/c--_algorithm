#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int cases = 1;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'c'){
            // i - 1이 있을 때
            if(i - 1 >= 0){
                // 중복 케이스
                if(str[i-1] == 'c'){
                    // 26 * 25 => 같은 것 빼고 곱하기
                    cases = cases * 25;
                }else{
                    // 26 * 26 => 앞이 숫자면 그냥 16자리 곱하기
                    cases = cases * 26;
                }
            }
            else{
                // 앞이 없을 때도 곱해야한다.
                cases = cases * 26;
            }
        }
        if(str[i] == 'd'){
            // i - 1이 있을 때
            if(i - 1 >= 0){
                // 중복 케이스
                if(str[i-1] == 'd'){
                    // 10 * 9 => 같은 것 빼고 곱하기
                    cases = cases * 9;
                }else{
                    // 10 * 10 => 앞이 문자면 그냥 10자리 곱하기
                    cases = cases * 10;
                }
            }
            else{
                // 앞이 없을 때도 곱해야한다.
                cases = cases * 10;
            }
        }


    }
    cout << cases;
}