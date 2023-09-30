#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


// 가장 좋은 방식은 해싱 기법을 사용해서 알파벳의 갯수를 연결하는 것
/**
 * @brief 인덱스를 대문자와 소문자 아스키 코드를 이용해서 1대1 대응 시키기
 * 대문자의 경우 65 - 90, 소문자의 경우 97 - 122
 * 1부터 26을 대문자. 27부터 52까지를 소문자라고 생각하자
 * 각각의 문자의 갯수 - 인덱스 갯수
 * 대문자가 들어오면 -64를 하고,
 * 소문자가 들어오면 -70을 하자
 * 이런 배열을 a, b 두 개 만들고
 * for문을 돌면서 확인하자
 * c에서는 어떻게든 map이나 set과 같은 자료구조를 배열로 매핑하는 생각을 해야한다.
 * @return int 
 */
int a[60], b[60];

int main(){
    // 대문자의 경우 65 - 90, 소문자의 경우 97 - 122
    // 1부터 26을 대문자. 27부터 52까지를 소문자라고 생각하자
    // 각각의 문자의 갯수 - 인덱스 갯수

    string str;

    cin >> str;

    int i;

    for(i=0; i<60;i++){
        a[i] = 0;
        b[i] = 0;
    }


    for(char ch: str){
        if(ch >=65&&ch<=90){
            a[ch-64]++;
        }else if(ch>=97&&ch<=122){
            a[ch-70]++;
        }
    }

    string str2;
    cin >> str2;
    for(char ch: str2){
        if(ch >=65&&ch<=90){
            b[ch-64]++;
        }else if(ch>=97&&ch<=122){
            b[ch-70]++;
        }
    }
    bool flag = true;

    for(int j = 1; j<=52;j++){
        if(a[j]!=b[j]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }

}