#include <iostream>
using namespace std;

int nums[10];

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int *a, const int n){
    // n개의 정수 a[0]부터 a[n-1]까지 비감소 순으로 정렬한다.
    for(int i = 0; i<n; i++){// i는 가변적
        int j = i; // j는 for문 내에서 고정
        // a[i]와 a[n-1] 사이에 가장 작은 정수를 찾는다.
        for(int k = i + 1; k<n; k++){
            if(a[k] < a[j]){
                j = k; // j를 재설정 해준다.
            }
            // 배열의 값은 무조건 힙 메모리 주솟값 참조, call by reference
            swap(a[i],a[j]);
        }
    }
}


int main(){

    int nums[] = {1,3,4,6,3,7,8,9,10,2};
    // Rest of your code
    selection_sort(nums, 10);
    for(int i = 0; i<10; i++){
        cout << nums[i] << endl;
    }
    return 0;

}
