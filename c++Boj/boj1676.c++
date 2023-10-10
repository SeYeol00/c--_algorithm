#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int cnt2 = 0;
    int cnt5 = 0;

    for(int i = 1; i <= n; i++){
        int num = i;
        while(num > 1){
            if(num%2 == 0){
                cnt2++;
                num /=2;
            }
            else if(num%5 == 0){
                cnt5++;
                num /=5;
            }else{
                break;
            }
        }
    }
    
    cout << min(cnt2,cnt5) << '\n';
}