#include <bits/stdc++.h>
using namespace std;


void partSet(int index, int depth, vector<int> result, int n){
    if(depth == n){
        for(int num : result){
            cout <<num<<' ';
        }
        cout << endl;
    }else{
        vector<int> temp = result; 
        result.push_back(index);
        partSet(index+1, depth+1, result,n);
        partSet(index+1,depth+1,temp,n);
        
    }
}

int main(){
    int n;
    cin>>n;

    int depth = 0;
    vector<int> result;
    partSet(1,depth,result, n);
}