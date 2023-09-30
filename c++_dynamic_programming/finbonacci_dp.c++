#include <iostream>
using namespace std;
int memo[1001];
int fibonacci_dp(int n){
    memo[0] = 0;
    memo[1] = 1;
    
    for(int i = 2; i <=n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }

    return memo[n];
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci_dp(n);
}