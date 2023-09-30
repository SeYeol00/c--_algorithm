#include <bits/stdc++.h>
using namespace std;


typedef vector<vector<long long> > matrix;
matrix multiplyMatrix(matrix& a, matrix& b){
    matrix ret(2, vector<long long>(2, 0)); 
    ret[0][0] = 0;
    ret[0][1] = 0;
    ret[1][0] = 0;
    ret[1][1] = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
        // 한도 초과가 안 나도록 행렬의 값에 1000000007으로 나눈 나머지를 넣는다.
                ret[i][j] = (ret[i][j] + a[i][k]*b[k][j])%1000000007;
            }
        }
    }
    return ret;
}

matrix fibonacci(unsigned long long n, matrix ans, matrix a){
    if(n == 0){
        return ans;
    }
    if(n%2==1){
        ans = multiplyMatrix(ans,a);
    }
    // a를 제곱
    a = multiplyMatrix(a,a);
    return fibonacci(n/2,ans,a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long num;
    cin >> num;
    matrix ans(2, vector<long long>(2, 0)); 
    ans[0][0] = 1;
    ans[0][1] = 0;
    ans[1][0] = 0;
    ans[1][1] = 1;

    matrix a(2, vector<long long>(2, 0)); 
    a[0][0] = 1;
    a[0][1] = 1;
    a[1][0] = 1;
    a[1][1] = 0;

    // 피보나치수의 위치는 해당 배열의 [0][1]이다.
    cout << fibonacci(num,ans,a)[0][1]<< '\n';
}