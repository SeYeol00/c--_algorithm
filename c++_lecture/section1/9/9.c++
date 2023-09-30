#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main1(){
    int target;

    cin >> target;

    // new를 사용할 때는 포인터 사용해야한다.
    vector<string>* list = new vector<string>();

    // 이건 n^2 알고리즘
    for(int i = 1; i <=target; i++){
        int cnt = 0;
        for (int j = 1 ; j<=i; j++){
            if(i%j == 0){
                cnt +=1;
            }
        }
        list-> push_back(to_string(cnt));
    }        
    // 동적 배열과 같은 것들을 접근할 때는 포인터 생각하자
    for(string number : *list){
        cout << number << ' ';
    }   

}

int cnt[50001];

int main(){
    int n, i, j;
    cin >> n;

    for(i=1; i<=n; i++){
        // j는 i의 배수로 돌자
        for(j=i; j<=n; j+=i){
            cnt[j]++;
        }
    }
    // 이게 훨씬 빠르다.
    // 배수로 돌아야 더 빠르게 생성된다.
    for(int num = 1; num<=n; num++){
        cout << cnt[num] << ' ';
    }
}