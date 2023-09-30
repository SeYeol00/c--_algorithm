#include <bits/stdc++.h>
using namespace std;



/**
 * 합병 정렬을 수행하여 두 배열을 병합하는 함수.
 *
 * @param arr1 정렬된 첫 번째 배열의 포인터
 * @param arr2 정렬된 두 번째 배열의 포인터
 * @param sizeArr1 첫 번째 배열의 크기
 * @param sizeArr2 두 번째 배열의 크기
 * @return 정렬된 결과 배열의 포인터
 */
int* conquer(int* arr1, int* arr2, int sizeArr1, int sizeArr2) {
    // 리턴할 배열을 만들자
    int* result = new int[sizeArr1 + sizeArr2];
    // 각각의 포인터를 만들자
    int i = 0, j = 0, k = 0;

    // 두 배열을 합병 정렬하여 결과 배열에 병합한다
    while (i < sizeArr1 && j < sizeArr2) {
        if (arr1[i] > arr2[j]) {
            result[k++] = arr2[j++];
        } else if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            // 정렬이니까 둘 다 넣자
            result[k++] = arr1[i++];
            result[k++] = arr2[j++];
        }
    }
    // 한 배열의 요소가 모두 처리되었을 경우 나머지 배열의 요소를 결과 배열에 추가한다
    if (sizeArr1 == i) {
        while (j < sizeArr2) {
            result[k++] = arr2[j++];
        }
    } else if (sizeArr2 == j) {
        while (i < sizeArr1) {
            result[k++] = arr1[i++];
        }
    }

    return result;
}




int main(){
    int n,m;

    cin >> n;
    int* arr1 = new int[n];

    for(int i=0; i < n; i++){
        cin >> arr1[i];
    }

    
    cin >> m;
    int* arr2 = new int[m];

    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }


    int* arr3 = conquer(arr1, arr2, n, m);

    for(int i = 0; i < n+m; i++){
        cout << arr3[i] << ' ';
    }

    delete[] arr1;
    delete[] arr2;
    
}