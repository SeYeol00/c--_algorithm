#include <iostream>
#include <vector>
using namespace std;

// struct가 많이 편하다.
// 구조체도 생성자가 있다.
struct Loc{
    int x,y,z;
    Loc(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    // 연산자 오버로딩
    // 정렬 기준
    // const를 써서 값 변경을 막아라
    // 상수 멤버 함수
    bool operator<(const Loc &b)const{
        // x값에 의해서 정렬
        // 이게 오름차순
        // 내림차순은 x > b.x
        // return x<b.x;

        // 기준 정하기
        // x y z 순으로 정렬된다.
        if(x!=b.x) return x<b.x;
        if(y!=b.y) return y<b.y;
        return z<b.z;
    }
};


int main(){
    vector<Loc> cordinates;
    cordinates.push_back(Loc(2,3,5));
    cordinates.push_back(Loc(3,6,7));
    cordinates.push_back(Loc(2,3,1));
    cordinates.push_back(Loc(5,2,3));
    cordinates.push_back(Loc(3,1,6));
    // 위 operator를 기준으로 소팅한다.
    sort(cordinates.begin(),cordinates.end());
    for(auto pos: cordinates) {
        cout << pos.x << " " << pos.y << " " << pos.z << endl;
    
    }
    

}