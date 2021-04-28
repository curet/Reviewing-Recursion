// JOSE C.S. CURET
// Objective: Write a recursive void function that has one parameter which is a positive
// integer and that writes out that number of asterisks '*' to the screen all on one line.

#include <iostream>
using namespace std;


void asteriskPerInt(int n){

    if(n == 1) cout << "*" << endl;
    else{
        cout << "* ";
        asteriskPerInt(n - 1);
    }
}

int main(){

    asteriskPerInt(10);
    return 0;
}