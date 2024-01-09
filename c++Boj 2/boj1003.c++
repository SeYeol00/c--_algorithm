#include <bits/stdc++.h>
using namespace std;
// 0 또는 1을 사용하는 횟수 저장
int cnt0[41] = {0};
int cnt1[41] ={0};

int memo[41] = {0};

// 시간초과 -> dp, 시간이 적다, dp 그리디
void fibonacci(int n) {
    cnt0[0] = 1;
    cnt1[0] = 0;
    // 배열에 계산 값을 더하며 반복 계산을 하지 않기 위한 처리
    if(cnt0[40] == 0){
        for(int i = 1; i < 41; i++){
            cnt0[i] = cnt1[i-1];
            cnt1[i] = cnt0[i-1] + cnt0[i];
        }
    } 
    cout << cnt0[n] << ' ' << cnt1[n] << '\n';
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int in;
        cin >> in;
        fibonacci(in);
    }
}