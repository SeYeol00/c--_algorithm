#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <tuple>
#include <set>
using namespace std;

int main(){
    int n;
    // 점수 배열에 점수를 입력받고
    // 등수 배열을 1로 초기화 해서
    // i가 1부터 5까지 돌면서
    // j도 1부터 5까지 돌고
    // 다른 점수들보다 크면 등수 배열을 증가시킨다.
    // 이 때 두 배열의 인덱스는 모두 1부터 5로 맞춰주자
    // 입력받은 순서대로 라고 했다.
    cin >> n;
    
    int score[n+1];
    int rank[n+1];
    for(int i=1; i<=5;i++){
        cin >> score[i];
    }

    for(int i=1; i<=5;i++){
        rank[i] = 1;
    }
    // Brute Force
    // for문 2개로 그냥 다 비교하는 것
    // 어차피 같으면 해당 안 된다.
    for(int i=1; i <=n;i++){
        for(int j=1;j<=5;j++){
            // 숫자가 작으면 등수가 커져야한다.
            if(score[i]<score[j]){
                rank[i]++;
            }
        }
    }
    for(int i = 1; i<=5;i++){
        cout << rank[i] << ' ';
    }
}
