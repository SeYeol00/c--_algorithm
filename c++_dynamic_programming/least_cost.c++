#include <iostream>
#include <cmath>
using namespace std;


int n;

int memo[1001] = {0};
int costs[1001][1001];




int least_cost(int num){
    memo[0] = 0;
    memo[1] = costs[0][1];

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){// 0 -> j 중 최솟값
            memo[i] = min(costs[0][i], memo[j] + costs[j][i]);
        }
    }
    return memo[num];
}


int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> costs[i][j]; 
        }
    }
    
    cout << least_cost(n);
    
    
    
}