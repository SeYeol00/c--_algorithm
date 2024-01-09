#include <iostream>
#include <string>
#include <vector>
using namespace std;


void swap(char &a, char &b){
    int temp = a;
    a = b;
    b = temp;
}

/**
 * 주어진 문자 범위에 대해 모든 순열을 생성하는 함수입니다.
 *
 * @param c 순열을 생성할 문자 배열입니다.
 * @param k 시작 인덱스입니다.
 * @param m 끝 인덱스입니다.
 *
 * @throws None
 */
/*
* 주어진 문자 배열의 지정된 범위 내에서 모든 순열을 생성하는 C++ 함수입니다. 
* 재귀와 swap 연산을 사용하여 가능한 모든 순열을 생성합니다. 
* 함수는 문자 배열, 시작 인덱스 및 끝 인덱스를 매개변수로 사용합니다. 
* 끝 인덱스에 도달하면 각 순열을 출력합니다.
*/
void permutations(char *c, const int k, const int m){
    // a[k], ..., a[m]에 대한 모든 순열 생성
    
    // 재귀 정지 조건
    if(k == m){// 해당 순열의 문자 갯수가 다 찼으므로
        for(int i = 0; i <=m; i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }else{ // 아직 문자열에 담을 루트가 존재
    // a[k:m]에는 하나 이상의 순열이 있다. 이 순열을 재귀적으로 생성
        for(int i=k; i<=m; i++){

            // swap을 두 번 사용하여 재귀 함수를 사이에 두는 것은 
            // 모든 가능한 순열을 생성하기 위한 알고리즘
            swap(c[k],c[i]); // 백트래킹
            permutations(c,k+1,m); // 재귀 
            swap(c[k],c[i]); // 백트래킹
        }
    }
}


int main(){
    
    char characters[5] = {'a','b','c','d','e'};
    permutations(characters,0,4);
    return 0;
}