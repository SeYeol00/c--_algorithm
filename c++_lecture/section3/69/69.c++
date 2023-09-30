#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > binaryTree(6);
queue<int> q;


int main(){

    for(int i = 0; i < 6; i++){
        int from, to;
        cin >> from >> to;
        binaryTree[from].push_back(to);
    }
    // 1 bfs 큐에 넣기
    q.push(1);

    while(!q.empty()){
        // front로 보고
        int front = q.front();
        // pop으로 꺼낸다.
        q.pop();
        cout << front << ' ';

        for(int next : binaryTree[front]){
            q.push(next);
        }
    }   
}