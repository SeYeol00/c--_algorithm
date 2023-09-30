#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 
 * emplace_back 함수는 C++의 std::vector 컨테이너에 요소를 추가하는 함수입니다.
 * emplace_back 함수는 새로운 요소를 컨테이너의 뒤에 직접 생성하여 추가합니다.
 * 
 * push_back 함수와는 다르게 emplace_back 함수는 요소를 생성하는 데 필요한 인수들을 그대로 전달합니다. 
 * emplace_back 함수는 내부적으로 요소를 생성하기 위해 가변 인수 템플릿을 사용하며, 이를 통해 요소를 생성할 때 임시 객체의 복사 또는 이동이 발생하지 않습니다.
 * 
 * 따라서, emplace_back 함수는 생성자를 호출하는 대신에 인자들을 그대로 전달하여 요소를 생성하는 효율적인 방법입니다.
 * 이는 요소의 복사 또는 이동을 피하면서 성능을 향상시킬 수 있습니다.
 * @return * int 
 */

int main() {
    int n, m;
    cin >> n >> m;
    // 파이썬은 튜플, C++은 페어를 쓰자
    vector<vector<pair<int, int> > > graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        //                  목적지. 가중치
        // 무방향 그래프는 두 번
        graph[a].emplace_back(b, c);
        graph[b].emplace_back(a, c);
    }







    return 0;
}