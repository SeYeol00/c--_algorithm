#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    set<int> S;

    for (int i = 0; i < m; i++) {
        string func;
        cin >> func;

        if (func == "all") { 
            // 집합 초기화
            S.clear();
            // 클리어 후 다시 넣기
            for (int j = 1; j <= 20; j++) {
                S.insert(j);
            }
            // 집합 비우기
        } else if (func == "empty") {
            S.clear();
        } else {
            int x;
            cin >> x;

            if (func == "add") {
                S.insert(x);
            } else if (func == "remove") {
                S.erase(x);
            } else if (func == "check") {
                cout << (S.find(x) != S.end() ? 1 : 0) << '\n';
            } else if (func == "toggle") {
                if (S.find(x) != S.end()) {
                    S.erase(x);
                } else {
                    S.insert(x);
                }
            }
        }
    }

    return 0;
}
