#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main() {


   int arr[10];
   int a = 0;
   int x,y,z;


   	while(a != 10) {

	x = rand() % 200;
	y = rand() % 200;
        z = x*x +y*y;
	
	if (z % 5 == 0) {

	arr[a] = z;
	a++;
	cout << x * x << " + " << y * y << " = " << z << endl;
	}
	
	}	



   cout << endl << " Zangav -->  { ";


	for (int i = 0; i < 10; i++){

	cout << arr[i] << ", " ;
	}

   cout << "}" << endl;































	return 0;
}

