#include <bits/stdc++.h>
using namespace std;

// 전역변수 잘 쓰기
// 좌표나 기본 값들은 전역으로 생성하는게 맘 편함
bool flag = false;

/**
 * @brief 합이 같은 부분 집합
 * 
 * @return int 
 */

void subSetSum(int index, vector<int> array, int depth, int sum1, int sum2 ){
    // 빠르게 잘라버리기
    if(sum1 == sum2){
        flag = true;
        return;
    }
    if(depth == array.size()){
        return;
    }
    else{
        subSetSum(index+1, array, depth+1, sum1+array[index], sum2);
        subSetSum(index+1, array, depth+1, sum1, sum2+array[index]);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> array(n,0);

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }   

    int depth = 0;

    subSetSum(0, array,depth,0,0);

    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
}