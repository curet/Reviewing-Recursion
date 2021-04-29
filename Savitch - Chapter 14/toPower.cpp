// JOSE C.S. CURET
// Objective: Implement the power function recursively

#include <iostream>
using namespace std;

int toPower(int base, int power){
	
	if(power == 0) return 1;
	if(power == 1) return base;
	else{
		
		return base * toPower(base, power - 1);
	}

}

int main(){

    cout << toPower(7, 9) << endl;

    return 0;
}