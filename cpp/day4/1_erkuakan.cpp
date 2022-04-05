#include <iostream>
using namespace std;


int erkuakan (int a) {

	if (a == 0) {
	
	return 0;
	}
 
   int d = 0;
   int i = 1;
	
	while (a){
 	
	   d = d + i *( a % 2 );
	 
	   a = a / 2; 

	   i = i * 10;
	}	
	
	return d;	
}



int main (){

	cout << erkuakan(1) << endl;
	cout << erkuakan(2) << endl;
        cout << erkuakan(555) << endl;
        cout << erkuakan(0) << endl;



	return 0;
}
