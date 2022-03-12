#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main() {

   int size;
   cout << " input size :  ";
   cin >> size;

   int arr1[size][size];
   int arr2[size][size];
   int arr3[size][size];
   int sum = 0;;


	for(int i = 0; i < size; i++){

		for(int j = 0; j < size; j++){

		arr1[i][j] = rand() % 9 + 1;
		arr2[i][j] = rand() % 9 + 1;
		arr3[i][j] = arr1[i][j] + arr2[i][j];
	        sum = sum + arr1[i][j] + arr2[i][j];

		}
	
	}



	for(int i = 0; i < size; i++){

		for(int j = 0; j < size; j++){

		cout << arr1[i][j] << ", ";
		}
	
	cout << endl;
	}


   cout << endl;
	

	for(int i = 0; i < size; i++){

		for(int j = 0; j < size; j++){

		cout << arr2[i][j] << ", ";
		}
	
	cout << endl;
	}


	
   cout << endl;
	

	for(int i = 0; i < size; i++){

		for(int j = 0; j < size; j++){

		cout << arr3[i][j] << ", ";
		}
	
	cout << endl;
	}


   cout << "masivi bollor tveri gumary = " << sum << endl ;










	return 0;
}
