
#include <iostream>
using namespace std;


int main() {

/*
           
	int arr[(rand() % 20 + 1 )];

	cout << sizeof(arr) << endl;
	

	for (int i=0; i < sizeof(arr); i++ ){

	arr[i] = rand() % 100 + 1;
	}

	
	for (int i=0; i < sizeof(arr); i++) {
	
	cout << arr[i] << ",";
	}
	
         	cout << endl;
		
                  
	for (int i=0; i < sizeof(arr); i++){
 
		for (int j=i; j < sizeof(arr); j++){
		
			if (arr[i] > arr[j]) {
             
            		    int a = arr[i];
          	            arr[i] = arr[j];
               		    arr[j] = a;

			}
			
		}
	}
         
	for (int i=0; i < sizeof(arr); i++) {
	
	cout << arr[i] << ",";
	}
	
         	cout << endl;

*/


  
    cout << "input masivi erkarutyun:  " ;
    int size;
    cin >> size;
    int arr[size];

    
	    for (int i = 0; i < size; i++) {
	 
	        cout << "arr[" << i << "] = ";
	        cin >> arr[i];
	    }



        
            for (int i = 0; i < size ; i++){

		cout << arr[i] << ",";
	   } 

		cout << endl; 
    int a; 
 
    // pxpjakneri metod ajman kargov
    for (int i = 0; i < size ; i++) {

        for (int j = i; j < size ; j++) {

            if (arr[i] > arr[j]) {

                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
 
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}


 

