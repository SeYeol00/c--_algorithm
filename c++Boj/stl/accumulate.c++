#include <algorithm>
#include <numeric> // accumulate가 있는 헤더 파일
#include <iostream>
using namespace std;

int array[10];



/**
+ * 주어진 정수 배열의 곱을 계산합니다.
+ *
+ * @param a 정수 배열입니다.
+ * @param n 배열의 요소 수입니다.
+ *
+ * @return 배열의 정수들의 곱입니다.
+ *
+ * @throws 없음.
+ */
int Product(int *a, int n){
    // a[0:n-1]의 수의 곱셈을 반환
    int initVal = 1; //                여기에 연산자 기입
    return accumulate(a, a+n, initVal, multiplies<int>());
}



int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << Product(array, 10);
}