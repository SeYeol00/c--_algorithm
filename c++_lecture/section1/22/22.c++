#include <iostream>
// 동적 배열
#include <vector>
using namespace std;


int main(){
    int n,k, sum=0,max;

    cin >> n >> k;
    
    // int형을 담는 vector를 n 크기 만큼 생성하겠다.
    vector<int> a(n);

    for(int i = 0;i<n;i++){
        // 동적 배열에서도 인덱싱으로 넣을 수 있다.
        cin >> a[i];
    }



    for(int i=0; i<k;i++){
        // 첫번째 구간의 합
        sum+=a[i];
    }
    // max에 저장
    max = sum;

    // 여기서 밀고 가는 것
    // 슬라이딩 윈도우
    // 앞의 것을 빼고 뒤의 것을 더하면서 그 값을 max랑 비교
    for(int i =k; i<n;i++){
        // 현재 값은 더하고 앞의 값은 뺀다
        sum = sum + (a[i] - a[i-k]);
        if(sum > max){
            max = sum;
        }
    }
    cout << max;

    return 0;
}