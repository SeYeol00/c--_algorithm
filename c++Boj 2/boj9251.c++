#include <bits/stdc++.h>
using namespace std;


int lcs_dynamic_programming(string a, string b, int n, int m){
    int memo[n+1][m+1];
    
    //base case
    for(int i = 0; i <= n; i++){
        memo[i][0] = 0;
    }
    for(int j = 0; j <= m; j++){
        memo[0][j] = 0;
    }

    // dynamic programming
    // 마지막 문자가 같을 때
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1] == b[j-1]){
                memo[i][j] = memo[i-1][j-1] + 1;
            }else{
                if(memo[i-1][j] >= memo[i][j-1]){
                    memo[i][j] = memo[i-1][j];
                }
                else{
                    memo[i][j] = memo[i][j-1];
                }
            }
        }
    }
    return memo[n][m];
}

int main(){

    string a, b;
    cin >> a >> b;
    cout << lcs_dynamic_programming(a,b,a.length(),b.length()) <<'\n';
    
}