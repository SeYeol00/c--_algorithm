#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> task(n+1);

    for(int i = 1; i <= n; i++){
        cin >> task[i];
    }
    
    int k;
    cin >> k;

    // 5초 지나고 정전하고 왔을 때 할 작업을 찾기

    int bp = 0, pos =0;
    
    while(1){
        pos++;
        if (pos > n){
            pos = 1;
        }
        if(task[pos] > 0){
            task[pos]--;
            bp++;
        }
        if(bp == k){
            break;
        }
    }
    
    int result = 0;
    for(int i = 1; i <= n; i++){
        result = i;
        if(task[i] > 0){
            break;
        }
    }
    if(result == 0){
        cout << -1;
    }else{
        cout << result;
    }
    
    

}