#include <iostream>
using namespace std;




void minmax(int *a , int size);


int main (){

   int arr[] = {18, 77, 1, 3, 5, 7, 9, 81, 4};

//   arrsum (arr, sizeof(arr)/sizeof(arr[0]));     //es ver ozinqvech hashvinq 
   
   minmax (arr,9);







	return 0;
}


void minmax(int *a, int size) {

   int min = 99999999;
   int max = -9999999;

	for (int *i = a; i <= &a[size - 1] ; i++) {

		if ( *i > max){

		   max = *i;
		}

		if (*i < min) {

		   min = *i;
		}


	
	}


	cout << "max valu = " << max << endl;
	cout << "min valu = " << min << endl;
	




}

