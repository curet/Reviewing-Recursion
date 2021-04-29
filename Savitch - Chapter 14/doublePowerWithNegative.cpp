// JOSE C.S. CURET
// Objective: a power function receive negative power and return a double value

#include <iostream>
using namespace std;

double power(double x, double n){

	if(n < 0){
			if(n == - 1) return 1 / x;
			else{
                return (1 / x)  * power(x , n + 1);
            } 
    }

	if(n == 0) return 1;

	if(n > 0){
			if(n == 1) return x;
			else{
				return x * power(x, n - 1);
			}
	}
    return 1;
}

int main(){
    cout << power(7,-9) << endl;
}