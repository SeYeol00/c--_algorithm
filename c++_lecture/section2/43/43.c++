#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 뮤직 비디오 결정 알고리즘
 * 
 *
 * 이분탐색 알고리즘을 응용해서 푸는 대표적인 문제는 결정 알고리즘
 * 물어보면서 계속 잡을 서칭한다.
 * 결정 알고리즘은 리턴값과 조건값의 변수가 다르다.
 * 이 문제에서는 비교할 것은 길이지만
 * while문 안에 있는 if문의 조건 값은 DVD의 갯수이다.
 * 결국 middle 길이에 맞게 DVD의 갯수를 계산하는 함수가 따로 있어야한다.
*/


int count(int middle, vector<int> arr){
    // DVD 갯수 카운트
    int cnt = 1;
    // DVD 노래 길이 합
    int sum = 0;
    for(int minute : arr){
        // 누적합이 middle을 넘을 때
        if((sum + minute) > middle){
            // DVD에 음악이 다 안 담기니 갯수가 하나 늘어난다.
            cnt++;
            // 이게 가능한 이유는 넘쳣으니까
            // 현재 곡의 길이로 음악 길이를 새로 잡아서 다음 for문에서 계산한다.
            sum  = minute;
        }else{
            // 아직 DVD에 여유 있다.
            sum+=minute;
        }
    }
    return cnt;
}




int main(){
    int n,m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 가장 긴 노래 시간을 찾아서 가장 작은 노래와 함께 middle을 찾아야한다.
    // 벡터에서 가장 큰 원소 찾기 -> max_element
    // 리턴 값은 이더레이터를 반환한다. 그래서 auto로 추론해야한다.
    int max = 0;
    // DVD 하나에 들어갈 수 있는 최대 음악 길이
    int sum = 0;
    // DVD 하나에 들어가는 최소 음악 길이
    int least = 1;
    for(int num: arr){
        if(num > max){
            max = num;
        }
        sum+=num;
    }



    //ㄹ
    int result = 0;

    // 이진 탐색 시작 
    // 가장 큰 값과 가장 작은 값으로 돌 것
    while(least <= sum){
        int middle = (least + sum)/2;
        // 중간의 음악길이를 이용한 DVD 갯수 세기
        // -> count(middle)
        if(count(middle,arr)>m){
            // DVD의 크기 늘리기
            least = middle + 1;
        
        // DVD의 길이가 가장 긴 노래보다는 길고 m보다는 작을 때
        // 이 때가 정답
        }else if(middle >= max && count(middle,arr)<=m){
            result = middle;
            sum = middle - 1;
        }
    }

    cout << result << endl;

}