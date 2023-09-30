#include <iostream>
using namespace std;

int digit_sum(int x){
    int tmp, sum=0;
    while(x > 0){
        tmp = x%10;
        sum += tmp;
        x = x/10;
    }

    return sum;
}
// private 함수는 위에 선언해줄 것
int main(){
    int n, num, i, sum, max = -2147000000,res;

    cin >> n;

    for(i = 0; i < n; i++){
        // cin은 띄어쓰기를 인식한다.
        cin >> num;
        sum = digit_sum(num);
        
        if(sum > max){
            max = sum;
            res = num;
        }else if(sum == max){
            if(num > res){
                res = num;
            }
        }
    }
    cout << res;    
}



