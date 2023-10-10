#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    int num1 = n;
    int num2 = m;

    int gcd, lcm;

    while(n%m!=0){
        int tmp = n%m;
        n = m;
        m = tmp;
    }
    gcd = m;
    cout << gcd << '\n';
    lcm = (num1/gcd)*(num2/gcd)*gcd;
    cout << lcm << '\n';
   
}