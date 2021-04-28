// JOSE C.S. CURET

//Objective: Write  a recursive void function that takes a single int argument n and
//writes the integers 1, 2, . . ., n.

#include <iostream>
using namespace std;

void displayUntilN(int n){
    
    if(n == 1) cout << n << " ";
    else{

        displayUntilN(n - 1);
        cout << n << " ";
    }
}

int main(){

    displayUntilN(10);
    return 0;
}