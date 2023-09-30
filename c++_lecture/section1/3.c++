#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,i,sum;
    sum = 1;

    cin >> n;

    cout << 1;
    // 끝에 +를 붙이기 싫으면 앞을 먼저 출력해라
    for(i=2;i<n;i++){
        if(n%i==0){
            sum+=i;
            cout << " + "<<i;
        }
    }
    cout << " = " << sum;
    return 0;
}