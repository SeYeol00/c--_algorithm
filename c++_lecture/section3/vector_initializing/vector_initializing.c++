#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 속도 빠르게 하기
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> a;
    
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    cout << a.size() << endl;
    cout << a[1] << endl;

    // c라는 벡터가 3개 생긴 것
    vector<int> c[3];
    c[0].push_back(1);
    c[0].push_back(2);
    c[0].push_back(3);
    c[1].push_back(4);
    c[1].push_back(5);
    c[1].push_back(6);
    c[2].push_back(7);
    c[2].push_back(8);
    c[2].push_back(9);
    cout << c[1][2] << endl;

    vector<pair<int, int > > graph[3];
    graph[1].push_back({1, 2});
    graph[1].push_back({1, 2});
    graph[1].push_back({1, 2});
    // first와 second로 도출


}