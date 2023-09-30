#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, sum, i, j, m, ans;

    cin >> n;

    for(i=0;i<n;i++){
        cin >> m >> ans;
        sum = 0;
        for(j=1;j<=m;j++){
            sum+=j;
        }
        if(sum==ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    
}