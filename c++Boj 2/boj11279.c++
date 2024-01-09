#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int> max_heap;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x>0){
            max_heap.push(x);
        }else{
            if (max_heap.empty()){
                cout << 0 << "\n";
            }else{
                int a = max_heap.top();
                max_heap.pop();
                cout << a << "\n";
            }   
        }
    }
    return 0;
}