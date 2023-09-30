#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 소인수 분해는 기본적으로 2가 몇개까지인지 계속 나누어야한다.
 * 이후 2의 갯수를 다 체크 하면 
 * 이후 차례로 2씩 뛰면서 제곱근까지 소인수인지 체크한다.
 * 3 포인터 알고리즘
 * @param n 
 * @return * vector<int> 
 */

int findNthUglyNumber(int n) {
    vector<int> uglyNumbers(n);
    uglyNumbers[0] = 1;

    int idx2 = 0, idx3 = 0, idx5 = 0;

    for (int i = 1; i < n; i++) {
        int next2 = uglyNumbers[idx2] * 2;
        int next3 = uglyNumbers[idx3] * 3;
        int next5 = uglyNumbers[idx5] * 5;

        int nextUgly = min(next2, min(next3, next5));
        uglyNumbers[i] = nextUgly;

        if (nextUgly == next2) {
            idx2++;
        }
        if (nextUgly == next3) {
            idx3++;
        }
        if (nextUgly == next5) {
            idx5++;
        }
    }

    return uglyNumbers[n - 1];
}

int main() {
    int n;
    cin >> n;

    int nthUglyNumber = findNthUglyNumber(n);
    cout << nthUglyNumber << endl;

    return 0;
}