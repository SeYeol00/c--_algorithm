#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int i, j, n, tmp;
    
    cin >> n;

    // 소인수분해 문제
    vector<int> ch(n+1); // => 기본적으로 0으로 초기화

    // 여기 아래가 핵심
    // 1은 소인수가 아니다.
    for(i=2; i<=n; i++){
        tmp=i;
        // 소인수분해 시ㅣ작은 2부터다.
        j=2;
        // 소인수분해 시작
        // 외우자. 이건 그냥 공식이다.
        while(tmp!=1){
            if(tmp%j==0){
                tmp/=j;
                ch[j]++;
            }else{
                // 2로 안 나눠지면 3으로 올리고....
                j++;
            }
        }
    }
    cout << n << "! = ";
    for(i=2; i<=n; i++){
        if(ch[i] == 0){
            continue;
        }
        cout << ch[i] << ' ';
    }
    return 0;
}