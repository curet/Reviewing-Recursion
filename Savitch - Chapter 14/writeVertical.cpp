// JOSE C.S. CURET
// Objective: This program take a positive number
// and display vertically using recursion

#include <iostream>
#include <cmath>
using namespace std;


void displayVertical(int n){

    // base case
    if(n < 10) cout << n << endl;

    // recursive case
    else{

        displayVertical(n / 10);
        cout << n % 10 << endl;             // it is very interesting that by having
                                            // the output after the call it display the
                                            // numbers starting with the first digit (starting from the left)
    }
}


int main(){

    displayVertical(1000000);
    
    return 0;
}
