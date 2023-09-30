#include <iostream>
#include <string>


// 숫자 커지니까 롱으로 받아라
long recursive(int num){
    if(num == 1 || num==0){
        return 1;
    }
    return num*recursive(num-1);
}

int main(){
    int a;

    std::cin >> a;

    std::cout << recursive(a);

    return 0;
    
}