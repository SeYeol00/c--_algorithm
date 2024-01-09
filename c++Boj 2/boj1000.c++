#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int answer = a+b;

    cout << answer << endl;

    return 0;
}

bool booleanCheck(int a){
	if ( a == 3){
		return true;
	}else{
		return false;
	}
}
