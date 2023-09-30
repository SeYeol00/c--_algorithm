#include <bits/stdc++.h>
using namespace std;


int main(){
    string fomula;
    cin >> fomula;

    int c = 0;
    int h = 0;
    int i, pos;

    // C가 한 개인지 아닌지
    if(fomula[1] == 'H'){
        c = 1;
        pos = 1; 
    }else{
        // H가 아닐 때 까지
        for(i=1; fomula[i] != 'H'; i++){
            // 형변환 
            // 어차피 왼쪽 부터 합치기 떄문에 c에 10일 곱하고 현재 값을 형변환 후 더하면 된다.
            c = c*10 + (fomula[i] - 48);
        }
        pos = i;
    }

    // H가 1개 일 때 
    // 다음 인덱스의 값이 Nul일 때
    if(a[pos+1] == '\0'){
        h = 1;
    }else{
         for(i=1; fomula[i] != 'H'; i++){
            // 형변환 
            // 어차피 왼쪽 부터 합치기 떄문에 c에 10일 곱하고 현재 값을 형변환 후 더하면 된다.
            h = h*10 + (fomula[i] - 48);
        }
    }
}