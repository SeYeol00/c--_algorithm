#include <iostream>
using namespace std;

int main(){
    int a[10],b[10],a_score = 0, b_score = 0, i, num,win[10];


    for(i = 0 ; i < 10; i++){
        cin >> num;
        a[i] = num;
    }

    for(i = 0 ; i < 10; i++){
        cin >> num;
        b[i] = num;
    }

    for(i = 0 ; i < 10; i++){
        win[i] = 0;
    }

    for(i = 0 ; i < 10; i++){
        if(a[i]>b[i]){
            win[i] = 1;
            a_score+=3;
        }else if(a[i]<b[i]){
            win[i] = 2;
            b_score+=3;
        }else{
            a_score++;
            b_score++;
            win[i] = 3;
        }
    }
    if(a_score == b_score){
        for(i = 9 ; i >=0; i--){
            if(win[i] != 3){
                break;
            }
        }
        cout << a_score << ' ' << b_score <<endl; 
        cout << "D" << endl;
    }else if(a_score > b_score){
        cout << a_score << ' ' << b_score <<endl; 
        cout << "A" << endl;
        }
    else if(a_score < b_score){
        cout << a_score << ' ' << b_score <<endl; 
        cout << "B" << endl;
        }
    
}