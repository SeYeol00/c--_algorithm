#include <bits/stdc++.h>
using namespace std;
/**
 * @brief 각 행의 평균과 그 행에 근접하는 숫자를 
 * 
 * 
 */

/**
 * Calculates the average of the given vector of integers.
 *
 * @param arr the vector of integers
 *
 * @return the rounded average of the integers
 *
 * @throws None
 */
int average(vector<int> arr){
    // round의 경우 나눌 때 나누는 대상이 double이어야 한다.
    double sum = 0;
    for(int num : arr){
        sum+=num;
    }
    // 반올림 함수
    return round(sum / 9.0);
}
/**
 * A description of the entire C++ function.
 *
 * @param None
 *
 * @return None
 *
 * @throws None
 */
int main(){
    // 동적배열로 2차원 배열 만들기
    vector<vector<int> > array(10,vector<int>(10,0));
    
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            cin >> array[i][j];
        }
    }
    for(int i = 1; i <= 9; i++){
        int avg = average(array[i]);
        int close = 101;
        int result = 0;
        for(int j = 1; j <= 9; j++){
            if(abs(array[i][j] - avg) < close){
                close = abs(array[i][j] - avg);
                result = array[i][j];
            }else if(abs(array[i][j] - avg) == close) {
                if(array[i][j] > result){
                    result = array[i][j];
                }
            }
        }
        cout << avg << ' ' << result << endl;
    }
}