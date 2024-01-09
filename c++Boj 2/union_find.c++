#include <iostream>

using namespace std;

/**
 * Finds the parent node of a given node in a disjoint set data structure.
 *
 * @param parent an array representing the parent node for each node.
 * @param a the node to find the parent of.
 *
 * @return the parent node of the given node.
 *
 * @throws None
 */
int find(int parent[], int a){
    if(parent[a] == a){
        return a;
    }
    parent[a] = find(parent, parent[a]);
    return parent[a];
}
// union은 c++의 키워드다.
void unionSet(int parent[],int a, int b){
    a = find(parent, a);
    b = find(parent,b);

    if(a!=b){
        parent[b] = a;
    }
}

int main(){
    int n, m;

    cin >> n;
    
    int parent[n];

    for(int i = 0; i<n;i++){
        parent[i] = i;
    }
    

    
}