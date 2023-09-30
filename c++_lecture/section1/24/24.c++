#include <iostream>
#include <string>
#include <algorithm> // 여기에도 절댓값 있음
#include <cmath> // 절댓값
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <tuple>
#include <set>
using namespace std;

int main(){
    int n;
    // jolly jumpers -> n개의 정수의 수열이 1부터 n-1까지의 수가 수열 원소의 차들의 집합에 모두 있는지 체크하기
    // 초기에는 n만큼의 크기를 가진 배열의 인덱스로 체크할 것
    cin >> n;

    int check[n];
    for(int i = 0; i<n; i++){
        check[i] = 0;
    }
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i=1; i<n;i++){
        // 핵심, cmath에서 사용하는 abs()함수 -> 절댓값
        check[abs(a[i] - a[i-1])]++;
    }
    int flag = 1;
    
    for(int i = 1; i<n;i++){
        if(check[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout << "YES" << endl;
    }else{
        cout  << "NO" <<endl;
    }
}