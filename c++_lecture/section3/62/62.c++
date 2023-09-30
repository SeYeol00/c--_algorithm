#include <bits/stdc++.h>
using namespace std;

int result[1000001];

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void mergeSort(int arr[], int left, int right){


    if(left<right){
         // divide
        // 근본적으로 이분 탐색과 비슷한 개념이다.
        int middle = (left + right)/2;
        mergeSort(arr,left,middle);
        mergeSort(arr,middle+1,right);
        
        int p1 = left, p2 = middle+1, p3 = left;

        // conquer
        while(p1 <= middle && p2 <= right){
            if(arr[p1] > arr[p2]){
                // 오름차순
                result[p3++] = arr[p2++];
            }else if(arr[p1] < arr[p2]){
                result[p3++] = arr[p1++];
            }
        }
        while(p1 <= middle){
            result[p3++] = arr[p1++];
        }
        while(p2 <= right){
            result[p3++] = arr[p2++];
        }
        // 복사
        // 덮어 씌우기
        for(int i = left; i <= right; i++){
            arr[i] = result[i];
        }
    }
}






int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}