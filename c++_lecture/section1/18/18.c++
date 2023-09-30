#include <iostream>
using namespace std;

int main(){
    int n, m, noise;

    cin >> n >> m;
    
    int sound[n];

    for(int i = 0; i < n;i++){
        cin >> noise;
        sound[i] = noise;
    }
    int time = 0;
    int max_time = 0;

    for(int i = 0; i < m; i++){
        if (sound[i] > m){
            time++;
        }else{
            if (max_time < time){
                max_time = time;
            }
            time = 0;
        }
    }
    // for문 끝나고 한 번 더 업데이트
    if(max_time < time){
        max_time = time;
    }

    if(max_time == 0){
        cout << -1;
    }else{
        cout << max_time;
    }

    return 0;
}
