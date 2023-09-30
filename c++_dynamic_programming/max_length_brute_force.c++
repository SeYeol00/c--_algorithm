#include <iostream>
using namespace std;

char target[1001];

int maxSubStringLength(char* target){
    // 정답
    int maxLength = 0;

    int n = strlen(target);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j+=2){
            int len = j - i + 1;
            if(maxLength>=len){
                continue;
            }

            int Lsum=0,Rsum=0;
            // k는 간격을 부분수열의 간격을 뜻한다.
            for(int k = 0; k < len/2; k++ ){
                Lsum += target[i+k] - 48;
                Rsum += target[k + i + len/2] - 48;
            }
            if(Lsum == Rsum){
                maxLength = len;        
            }
        }
    }
    return maxLength;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> target;

    cout << maxSubStringLength(target) << '\n';

}