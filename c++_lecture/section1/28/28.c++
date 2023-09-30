#include <bits/stdc++.h>
using namespace std;


/**
 * @brief 팩토리얼의 소인수분해 문제 응용
 * 
 * @return int 
 */
int main(){
    int n;

    cin >> n;
    // 1000!의 경우 컴퓨터가 변수에 담을 수 없다.
    // 그래서 소인수분해를 사용해서 리스트에 저장하자
    vector<int> a;

    // 팩토리얼이니까 2부터 n까지 다 검사
    for(int i = 2; i <= n; i++){
        // i 손상 안 가게 옮겨 담자
        int temp = i;

        // 소인수는 2부터
        int j = 2;
        // 다 나눠지면 1이 된다.
        while(temp != 1){
            int left = temp%j;
            if(left == 0){
                temp /=j;
                // 나눠지면 J는 소인수
                a.push_back(j);
            }else{
                j++;
            }
        }
    }
    // 0은 *10일 때 생긴다. 
    // 소인수 끼리 10이 생길라면 2와 5밖에 없다.
    // 즉 2와 5를 한 쌍으로 정해서 찾으면 된다.
    for(int num : a){
        cout << num << ' ';
    }
    cout << endl;
    int two_count = 0;
    int five_count = 0;

    for(int num : a){
        if(num == 2){
            two_count++;
        }else if(num  == 5){
            five_count++;
        }
    }
    if(two_count == 0 || five_count == 0){
        cout << 0;
    }else if(two_count > five_count){
        cout << five_count;
    }else if(two_count <= five_count){
        cout << two_count;
    }



}