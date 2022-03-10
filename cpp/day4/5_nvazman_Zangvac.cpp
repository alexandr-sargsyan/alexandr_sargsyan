#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {


           
	int arr[(rand() % 25  + 1 )];

	

	for (int i=0; i < sizeof(arr)/4; i++ ){

	arr[i] = rand() % 100 + 1;
	}

	



	 cout << "imput arr: - ";	

	for (int i=0; i < sizeof(arr)/4; i++) {
        	
	cout << arr[i] << ",";
	}
	
         	cout << endl;
		
                  
	for (int i=0; i < sizeof(arr)/4; i++){
 
		for (int j=i; j < sizeof(arr)/4; j++){
		
			if (arr[i] < arr[j]) {
             
            		    int a = arr[i];
          	            arr[i] = arr[j];
               		    arr[j] = a;

			}
			
		}
	}
         

	cout << "output arr: - " ;

	for (int i=0; i < sizeof(arr)/4; i++) {
	
	cout << arr[i] << ",";
	}
	
         	cout << endl;
	cout << "arr[0] = " << arr[0] << "   -  " << "arr[" << sizeof(arr)/4 - 1 << "] = " << arr[sizeof(arr)/4 -1] << endl;





	return 0;
}


