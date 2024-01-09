#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> check_dict;
    for (int key : arr) {
        check_dict[key]++;
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    for (int key : arr2) {
        if (check_dict.count(key) > 0) {
            cout << check_dict[key] << " ";
        } else {
            cout << 0 << " ";
        }
    }
    return 0;
}