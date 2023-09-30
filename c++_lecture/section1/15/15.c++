#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;



/**
 * @brief 에라스토스테네스의 체
 * 
 * @return ** int 
 */
int main(){
    int n, i, j, flag, cnt=0;
    
    cin >> n;

    for(i=2; i<=n;i++){
        flag = 1;
        for(j = 2; j<=sqrt(i); j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
