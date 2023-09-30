#include <bits/stdc++.h>

/**
 * O(n^2)의 알고리즘이면 n이 3만 이상인 알고리즘을 1초 이내로 풀기는 어렵다.
 * 포인터 변수를 가지고 교집합을 조정할 수 있다.
 * 다만 이런 교집합 문제는 두 집합을 정렬해서 병합정렬처럼 해야한다.
 * 생각을 하자
 * vector.begin(), vector.end()의 이더레이터패턴은 많이 쓴다.
 * 외워두자
*/

void same(int* arr1, int* arr2, int size1, int size2, int resultsize, int* result) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
            j++;
        } else {
            if (arr1[i] > arr2[j]) {
                j++;
            } else {
                i++;
            }
        }
    }
}

int main() {
    int n, m;
    std::cin >> n;

    std::vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::sort(arr1.begin(), arr1.end());

    std::cin >> m;
    std::vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    int resultsize = std::min(n, m);
    std::vector<int> result(resultsize);

    std::sort(arr2.begin(), arr2.end());

    same(arr1.data(), arr2.data(), n, m, resultsize, result.data());

    for (int i = 0; i < resultsize; i++) {
        if(result[i] == 0){
            continue;
        }
        std::cout << result[i] << ' ';
    }

    return 0;
}