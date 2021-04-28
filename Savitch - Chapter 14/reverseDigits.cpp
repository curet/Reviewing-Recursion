// JOSE C.S. CURET

// Write a recursive void function that has one parameter, which is a positive
// integer. When called, the function writes its argument to the screen backward.
// That is, if the argument is 1234, it outputs the following to the screen: 4321

#include <iostream>
using namespace std;

void reverseDigits(int n){
    
    if(n < 10) cout << n << endl;
    else{
        cout << n % 10;
        reverseDigits(n / 10);
    }
}

int main(){

    reverseDigits(1234);
    return 0;
}