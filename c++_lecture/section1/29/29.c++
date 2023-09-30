#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // 동적으로 포인터를 할당했으면 값은 초기화 해야한다.

    int storage[10];    

    for(int i = 0; i < 10; i++){
        storage[i]=0;
    }

    // 10만까지는 O(n)으로 버틴다.
    // 그 이상은 못 버팀
    for(int i=1; i<=n; i++){
        int temp = i;
        while(temp > 0){
            int index = temp%10;
            storage[index]++;
            temp /= 10;
        }    
    }
    
    for(int i = 0; i < 10; i++){
        cout << storage[i] << ' ';
    }
    cout << endl;
    
    cout << storage[3];
}