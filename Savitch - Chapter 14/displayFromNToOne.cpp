// JOSE C.S. CURET

// Objective Write a recursive void function that takes a single int argument n
// and writes n, n-1, ..., 3, 2, 1.

#include <iostream>
using namespace std;

void displayFromNToOne(int n){

    if(n == 1) cout << n << " ";
    else{

        cout << n << " ";
        displayFromNToOne(n - 1);

    }
}

int main(){
    
    displayFromNToOne(10);
    return 0;
}