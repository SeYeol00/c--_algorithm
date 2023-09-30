#include <bits/stdc++.h>
using namespace std;



int binary_search(vector<int> arr, int m){
    int left = 0, right = arr.size()-1;
    while(left<=right){
        int middle = (left + right) / 2;
        if(arr[middle] == m){
            return middle;
        }else if(arr[middle]>m){
            right = middle;
        }else if(arr[middle]< m){
            left = middle + 1;
        }
    }
    return -1;
}

int main(){
    int n ,m;
    cin >> n >> m;

    // 백터에 다 있다.
    vector<int> arr(n);



    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 이거 먼저 하려면 소팅 하고 돌려야 한다.
    sort(arr.begin(),arr.end());


    int result = binary_search(arr, m);
    if(result == -1){
        cout << "해당 하는 값이 없습니다." << endl;
    }else{
        cout << result << endl;
    }
}