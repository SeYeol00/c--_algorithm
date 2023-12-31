#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int* arr, int size){
    for(int i = 0; i < size;i++){
        int min = i;
        for(int j = i; j < size ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){
    int n ;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection_sort(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}