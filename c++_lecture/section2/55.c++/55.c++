#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // 스택의 크기는 정하면 안된다.
    // 배열만 정하자
    // 스택을 일단 넣고 원하는 값이 나올 때 까지 pop하는 것이 좋다.
    stack<int> stk;
    
    vector<int> train(n+1);

    // 정답 배열
    vector<char> results;

    for(int i = 1; i <= n;i++){
        cin >> train[i];
    }

    // 순서대로라면 순차적으로 증가하는 인덱스가 증가한다.
    // 해당 인덱스의 값이 나가면 다음 인덱스로 올린다.
    // 순서 리스트가 딱히 필요가 없다.
    int target = 1;

    // 들어오는 배열 순회
    for(int i = 1; i <= n; i++){
        int num = train[i];
        stk.push(num);
        results.push_back('P');

        // 핵심 타겟 인덱스로 순서를 정한다.
        // 즉 타겟 인덱스 값이 스택의 맨 위에 있을 때까지
        // 이건 외워두자 타겟일 경우
        while(!stk.empty() && stk.top() == target){
            stk.pop();
            results.push_back('O');
            target++;
        }


    }
    // 비어있지 않다면 실패
    if(!stk.empty()){
        cout << "impossible";
    }else{
        for(char ch: results){
            cout << ch;
        }
    }
}