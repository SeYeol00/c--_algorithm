#include <bits/stdc++.h>
using namespace std;

/**
 * @brief dfs 문제
 * 전위 중위 후위는 어떤 곳에 리커전을 생성할지에 따라 다르다.
 * 
 * @param n 
 * @param visited 
 * @return int 
 */
void preOrder(int n){
    
    // 리턴만 적는게 정지
    if(n > 7){
        return;
    }
    // 재귀 호출
    // 이진트리면 그냥 두 개 적자
    else{
        // 전위 순회
        cout << n << " ";
        preOrder(n * 2);
        preOrder(n*2 + 1);
    }
}

void inOrder(int n){
    // 리턴만 적는게 정지
    if(n > 7){
        return;
    }
    // 재귀 호출
    // 이진트리면 그냥 두 개 적자
    else{
        // 중위 순회
        inOrder(n * 2);
        cout << n << " ";
        inOrder(n*2 + 1);
    }
}
void postOrder(int n){
    // 리턴만 적는게 정지
    if(n > 7){
        return;
    }
    // 재귀 호출
    // 이진트리면 그냥 두 개 적자
    else{
        // 후위 순회
        postOrder(n * 2);
        postOrder(n*2 + 1);
        cout << n << " ";
    }
}




int main(){
    int n;
    cin >> n;

    vector<bool> visited(n + 1, false);

    preOrder(1);
    cout << endl;
    inOrder(1);
    cout << endl;
    postOrder(1);
    
}