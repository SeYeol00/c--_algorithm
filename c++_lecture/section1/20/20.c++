#include <iostream>
using namespace std;

int main(){
    int n, i, a[101], b[101];

    cin >> n;

    for(i=0; i<n; i++){
        int num;
        cin >> num;
        a[i] = num;
    }
    for(i=0; i<n; i++){
        int num;
        cin >> num;
        b[i] = num;
    }
    int p = 1;

    for(i = 0; i<n;i++){
        if(a[i] == b[i]){
            cout << "D" << endl;
        }else if(a[i] == 1){
            if(b[i] == 2){
                cout << "B" << endl;
            }else if(b[i] == 3){
                cout << "A" << endl;
            }
        }else if(a[i] == 2){
            if(b[i] == 3){
                cout << "B" << endl;
            }else if(b[i] == 1){
                cout << "A" << endl;
            }
        }else if(a[i] == 3){
            if(b[i] == 2){
                cout << "A" << endl;
            }else if(b[i] == 1){
                cout << "B" << endl;
            }
        }
    }
}