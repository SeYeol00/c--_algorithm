#include <bits/stdc++.h>
using namespace std;



void countUp(int n){
    if(n>1){
        // 리턴을 때리면 멈춘다.
        countUp(n -1);
    }
    cout << n << ' ';
}



int main(){
    int n;
    cin >> n;

    countUp(n);
}