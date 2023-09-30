#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAX 10
int array[MAX];


int binary_search(int *array, const int x, const int left, const int right){
    if(left <= right){
        int middle = (left + right)/2;
        if(x < array[middle]){
            return binary_search(array, x,left, middle);
        }else if(x > array[middle]){
            return binary_search(array,x,middle+1,right);
        }else{
            return middle;
        }
    }else{
        return -1;
    }
}



int main(){
    int array[] = {1,5,7,9,10,12,20,25,39,47};
    int num = 7;

    cout << binary_search(array,num,0,MAX-1);
    
}hello
