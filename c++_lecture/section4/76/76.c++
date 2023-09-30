#include <bits/stdc++.h>
using namespace std;

int memo[21] = {0};


int factorial(int n){
    if(memo[n] != 0){
        return memo[n];
    }
    if(n == 0|| n==1){
        return 1;
    }
    // 메모이제이션 써서 풀기 습관화
    memo[n] = n*factorial(n-1);
    return memo[n];
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;

    // 이항계수의 식을 알아두자
    cout << factorial(n)/(factorial(n - k)*factorial(k)) << '\n';

    for(int i = 1; i <= 20; i++){
        cout << memo[i] << " ";
    }
    
}