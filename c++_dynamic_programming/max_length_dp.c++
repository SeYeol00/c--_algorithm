#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;


// 부분 수열의 합을 저장하기 위해서는 2차원 배열이 필요하다. S(i,j)가 필요하기 때문
int memo[1001][1001];
char target[1001];


int maxSubStringLength(char* target){
    
    int n = strlen(target); // 원래 길이
    int maxLength = 0;
    
    // 행렬의 아래 대각선은 사용하지 않는다.
    // first case인 길이가 1인 수열의 데이터를 먼저 저장하자.
    for(int i = 0; i < n;i++){
        memo[i][i] = target[i] - 48;
    }
    // 길이가 2인 수열의 데이터 저장 시작, 바텀 업
    for(int len = 2; len<=n;len++){
        // 현재 부분 수열에서 i와 j를 선택한다.
        // 1을 더하거나 뺄 때를 좀 더 알아보자
        for(int i = 0; i < n-len+1; i++){
            int j = i + len - 1;
            // 중간 지점 k
            int k = len/2;

            // 최장 부분 합 수열 공식
            memo[i][j] = memo[i][j-k] + memo[j-k+1][j];

            // len가 짝수고, 왼쪽과 오른쪽 절반의 합이 같으며 len가 maxLen보다 크면 갱싱
            if(len%2==0 && memo[i][j-k] == memo[j-k+1][j] && len > maxLength){
                maxLength = len;
            }
        }
    }   
}




int main(){
    cin >> target;  

    
}