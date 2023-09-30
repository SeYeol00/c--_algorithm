#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(){
    // 이러면 엄청 빨라짐
    ios_base::sync_with_stdio(false);

    // freopen("input.txt","rt",stdin);
    // 캐릭터 배열 선언, 주민번호 자리보다 약간 크게

    char a[20];
    int year, age;

    // 레퍼런스 타입의 주소값을 가져온다.
    scanf("%s", &a);
    
    if(a[7]=='1'||a[7]=='2'){
        // 아스키 코드에서 문자 '0'은 48, '9'는 57
        // 아스키 코드에서 'A'는 65, 'Z'는 90
        // 아스키 코드에서 'a'는 97, 'z'는 122
        // 문자열을 숫자로 형변환 -> 48을 뺸다.
        year=1900+((a[0]-48)*10 + (a[1]-48));
        
    }else{
        year = 2000 + ((a[0]-48)*10 + (a[1]-48));
    }
    
    age = 2019 - year + 1;

    cout << age << endl;

    // 남자인지 여자인지
    if(a[7]=='1'||a[7]=='3'){
        cout << "M" << endl;
    }else{
        cout << "W" << endl;
    }

    
}