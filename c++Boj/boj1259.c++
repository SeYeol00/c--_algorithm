#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(string str, int l, int r){
    if(l>=r){
        return true;
    }
    if(str[l] != str[r]){
        return false;
    }
    return palindromeCheck(str, l+1, r-1);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(true){
        int target;
        cin >> target;

        if(target == 0){
            break;
        }

        string str = to_string(target);
        int n = str.size();
        if(palindromeCheck(str, 0, n-1 )){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }
    }
}