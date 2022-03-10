#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {


           
	int arr[(rand() % 30  + 1 )];

	

	for (int i=0; i < sizeof(arr)/4; i++ ){

	arr[i] =( rand() % 100 + 1);
	}

	
	for (int i=0; i < sizeof(arr)/4; i++) {
	
	cout << arr[i] << ",";
	}
	
         	cout << endl;

         int a;
	
	for (int i = 0 ; i < sizeof(arr)/4  ; i++) {

  	      if (arr[0] < arr[i] ){
		
		a = arr[0];
		arr[0] = arr[i];
		arr[i] = a;
		}	
	}



	 cout << "amenicmec tiv = " << arr[0] << endl;





	return 0;


}
