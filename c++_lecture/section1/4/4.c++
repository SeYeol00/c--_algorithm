#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


// cin은 띄어쓰기로 판별하기 때문에 줄바꿈이 되는지 안 되는지 상관 없다 굳
int main(int argc, char const *argv[]){
    int n,min,max,i;
    min = 101;
    max = 1;

    cin >> n;

    for(i=0;i<n;i++){
        int age;
        cin >> age;
        if(age<min){
            min = age;
        }
        if(age > max){
            max = age;
        }
    }
    cout << max-min;
    return 0;
}
