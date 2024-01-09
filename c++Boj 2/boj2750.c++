#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    // 입력 받기
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int num : arr){
        cout << num << endl;
    }

    return 0;
}
