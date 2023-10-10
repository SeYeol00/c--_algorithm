#include <bits/stdc++.h>
using namespace std;


int people[1001];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> people[i];
    }

    sort(people, people + n);
    
    int result = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += people[i];
        result += sum;
    }
    cout << result << '\n';
}