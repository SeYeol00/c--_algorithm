#include <bits/stdc++.h>
using namespace std;
long long n, m, mx = 0;

vector<long long> trees;


long long countTree(long long standard){
    long long length = 0;
    for(long long tree : trees){
        if(tree > standard){
            length += (tree - standard);
        }
    }
    return length;
}

long long binary_search(int left, int right){
    while(left <= right){
        long long middle = (left + right)/2;
        long long length = countTree(middle);
        if(length >= m){
            // 여기가 핵심
            // 최대값을이라 m보다 크면 갱신
            mx = middle;
            left = middle + 1;
        }else{
            right = middle - 1;
        }
    }
    return mx;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        trees.push_back(a);
    }
    sort(trees.begin(), trees.end());
    cout << binary_search(0, trees[n-1]);
}