#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Set 사용 방법 -> insert & erase
 * pair.second를 1순위로, pair.first를 2순위로 정렬하는 방법
 * compare 함수 지정이 핵심
 * compare 함수의 파라미터의 경우 &으로 주소값 접근이 필요하다.
 * @return int 
 */
bool compare(const pair<string,int>& a,const pair<string,int>& b){
    if(a.second == b.second){
        // -> 오름차순
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL); 

    int n;
    cin >> n;
    set<string> s;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    

    vector<pair<string,int> > v;

    for(string str: s){
        v.push_back(make_pair(str,str.size()));
    }

    //                      const로 넣어야 따로 파라미터 지정을 안 한다.
    sort(v.begin(), v.end(),compare);
    
    for(pair<string,int> p: v){
        cout << p.first << '\n';
    }

}
