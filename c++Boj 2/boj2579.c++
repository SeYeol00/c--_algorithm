#include <bits/stdc++.h>
using namespace std;
int n, stair[301];
int memo[301];
// 최댓값 찾기
int Max(int a, int b){
    // c++ 람다 된다.
    return a > b ? a : b;
}
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> stair[i];
    }
    
    memo[0] = stair[0];
    // 기본적으로 최대값을 저장하는 것이다.
    // Max로 꾸준히 메모해야한다.
    memo[1] = Max(stair[0] + stair[1], stair[1]);// 최댓값 찾기
    memo[2] = Max(stair[0] + stair[2], stair[1] + stair[2]); // 최댓값 찾기

    // 케이스를 나누어야한다.
    for(int i = 3; i < n; i++){
        memo[i] = Max(memo[i-2] + stair[i], memo[i-3] + stair[i-1] + stair[i]);
    }
    cout << memo[n-1] << '\n';
}
