#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}




void selection_sort(int* arr, int size){
    for(int i = 0; i < size - 1; i++ ){
        int min = i;
        for(int j = i + 1; j < size; j++){
            // 최솟값이랑 비교해라
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}



int main(){
    int n;
    cin >> n;

    int* arr = new int[n];


    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for(int j = 0; j < n; j++){
        cout << arr[j] << ' ';
    }
}