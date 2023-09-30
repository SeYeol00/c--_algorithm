#include <iostream>
#include <string>


using namespace std;

int main(){
    int a,b,i,sum;
    sum = 0;

    cin>>a>>b;

    for(i = a; i<b;i++){
        sum+=i;
        cout<<i<<" + ";
    }

    cout<< b << " = " << sum+b;

    return 0;
}