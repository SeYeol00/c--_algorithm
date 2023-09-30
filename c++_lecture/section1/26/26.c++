#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int i, j, n, cnt =0;

    cin >> n;
    vector<int> ability(n+1);
    vector<int> rank(n+1);
    for(i=1; i<=n; i++){
        cin >> ability[i];
    }
    for(i=1; i<=n; i++){
        rank[i] = 1;
    }

    // 정 방향
    for(int i=1; i<=n; i++){
        // 비교할 대상은 역방향에 있다.
        for(int j=i; j>=1; j--){
            if(ability[i]<ability[j]){
                rank[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << rank[i] << ' ';
    }

}