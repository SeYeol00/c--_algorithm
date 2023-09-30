#include <iostream>
using namespace std;


int main(){
    int n, man, anger_people = 0;

    cin >> n;

    int line[n];

    for (int i = 0 ; i < n; i++){
        cin >> man;

        line[i] = man;
    }
    for(int j = 0 ; j < n-1; j++){
        int flag  = 1;
        for(int k = j+1; k < n; k++){
            if(line[j] < line[k]){
                flag = 0;
            }
        }
        if(flag == 1){
            anger_people++;
        }
    }
    cout << anger_people <<endl;
    
}