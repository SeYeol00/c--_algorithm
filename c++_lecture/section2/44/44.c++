#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 마구간 정하기: 결정 알고리즘
 * 가장 가까운 두 말의 거리를 그리면서 숫자를 나열해보자
 * 가장 가까운 두 말의 거리는 결국 lst[n-1]을 넘지 않는다.
 * 그 다음은 중간값을 생각해보자 (1+9)//2 = 5 일 것 아닌가
 * 5가 답이 되는가? 가장 가까운 두 말의 거리 == 5??
 * 모든 말의 거리는 5보다 크거나 같아야 답이 된다.
 * 1 = start point, 9 = end point
 * 2 -1은 5보다 작아서 안 됨 그 다음은 4 - 1
 * 8 - 1은 7 즉 1, 8
 * 그 다음은 어차피 5보다 작아서 배치 불가 즉 5로는 2마리가 한계그러면 5보다 작은 4를 엔드 포인트로 하고 다시 돌리자 => 2
 * 2는 되는가?
 * 
 * @return * int 
 */


// 카운트니까 센다는 생각을 먼저 가지자
int count(int middle,vector<int> arr){
    int cnt = 1;
    // 말을 첫번 째에 배치해서 점차 옮길 것
    int batch = arr[0];
    // 이제 두번째 마구간 좌표부터 배치할 것
    for(int i = 1; i < arr.size(); i++){
        // 두 번째 마구간과 처음 말의 거리
        // 이게 미들보다 크다면
        if((arr[i] - batch) >= middle){
            // 다음 말을 마구간에 배치가 가능하다.
            // 왜냐면 최대 거리를 물어봤기 때문이다.
            cnt+=1;
            // 다음 말의 위치 갱신
            batch = arr[i];
        }
    }
    return cnt;
}


int main(){
    int n, c;
    cin >> n >> c;

    vector<int> cordinate(n);

    for(int i = 0; i < n; i++){
        cin >> cordinate[i];
    }

    // 결정 알고리즘 -> 먼저 소팅하자
    // 먼저 소팅을 해서 거리의 최댓값, 최솟값을 정하자
    sort(cordinate.begin(), cordinate.end());
    
    // 거리의 최댓값과 최솟값을 정하자
    int start = cordinate[0];
    int end = cordinate[n-1];
    // 결과값 초기화
    int result = 0;

    while(start <= end){
        int middle = (start + end)/2;
        // 세마리 이상 되면 배치 가능
        if(count(middle,cordinate) >= c){
            result = middle;
            start = middle + 1;
            
            // 세마리보다 작으면 배치 불가
        }else if(count(middle,cordinate) < c){
            end = middle - 1;
        }
    }
    cout << result;
    
}