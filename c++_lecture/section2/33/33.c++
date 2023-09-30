#include <bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin >> n;

    // 정렬함수를 쓰려면 벡터를 써야한다.
    // 그냥 기본으로 벡터를 쓰라고 강요한다.
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    int count = 1;
    for(int i = n-1; i >0; i-- ){
        int num = arr[i];
        if(count == 3){
            result = num;
            break;
        }
        if( arr[i - 1]== num){
            continue;
        }
        count++;
    }

    cout << result;
}