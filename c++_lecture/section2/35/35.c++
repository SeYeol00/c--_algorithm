#include <bits/stdc++.h>
using namespace std;

// 음수 정렬
// 이웃한 두 수를 정렬하는 버블 소트가 가장 적합
// 알고리즘에서 stable 개념을 떠올리자
// 음수가 포함된 수열은 stable 해야한다.
// 양수 끼리와 음수 끼리의 순서는 변함이 없어야 한다.
//  핵심 -> 양 음만 비교해라

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


void bubble_sort_custom(int* arr, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size -1 -i; j++){
            // 현재가 양수고 이 앞이 음수면 바로 스왑
            // 양 양, 양 음, 음, 양, 음음
            if(arr[j]>0 && arr[j+1] < 0){
                swap(arr[j], arr[j+1]);
            }else if(arr[j]<0&&arr[j+1]>0){
                continue;
            }
        }
    }
}




int  main(){
    int n;
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort_custom(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
