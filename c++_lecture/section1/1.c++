#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int answer = 0;
    for(int i = 1; i<=n;i++){
        if(i%m==0){
            answer+=i;
        }
    }
    cout << answer;
    
}