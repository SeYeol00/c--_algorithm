#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}



void bubble_sort(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main(){
    int n;
    cin >> n;
    
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    bubble_sort(arr,n);
    
    for(int i = 0; i < n; i++){
        cout<< arr[i] << ' ';
    }

}