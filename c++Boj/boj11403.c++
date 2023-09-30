#include <bits/stdc++.h>
using namespace std;

int n;
int adjmatrix[101][101];
int dist[101][101];



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> adjmatrix[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // 거리 그래프 초기화
            if(i==j) dist[i][j];
            else if(adjmatrix[i][j]) dist[i][j] = adj
        }
    }
    
}