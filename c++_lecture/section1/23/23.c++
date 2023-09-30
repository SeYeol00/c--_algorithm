#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main(){
    int n, pre, now , cnt = 1, max = 1;

    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i<n; i++){
        now = a[i];
        pre = a[i-1];
        if(pre <= now){
            cnt++;
        }else if(pre > now){
            if(max < cnt){
                max = cnt;
            }
            // 기본적으로 1이어야 한다.
            cnt=1;
        }
    }



}