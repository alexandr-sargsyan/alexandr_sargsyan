#include <iostream>
using namespace std;

bool kataryal_tiv(int a) {

	if (a == 0 || a == 1){
	
	return false ;
	} 

   int d =0;
	
	for (int i = 1; i < a; i++) {
	
		if (a % i == 0) {
	
		d = d + i;
			}
	}

		if (d == a) {
	
		return true ;
		}


	return false ;
}



int main (){

	cout << kataryal_tiv(0) << endl; //0   // ete 0 veradarcne folse , 1 veradarcne true 
	cout << kataryal_tiv(1) << endl; //0
	cout << kataryal_tiv(6) << endl; //1
	cout << kataryal_tiv(15) << endl; //0
	cout << kataryal_tiv(28) << endl; //1
	cout << kataryal_tiv(496) << endl; //1
	cout << kataryal_tiv(33550336) << endl; //1
	cout << kataryal_tiv(888888) << endl; //0
	return 0;
}
