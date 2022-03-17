#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void printarr (int ** arr, int row , int col) {


	for (int ** ptr = arr ; ptr <= arr + row - 1 ; ptr ++) {

	
		for ( int * ptr2 = *ptr ; ptr2 <= *ptr + col -1; ptr2++ ) {
		
		    cout << *ptr2 << "\t";
		}
		cout << endl;
	}




}


void sortarr (int ** arr, int row , int col) {

	int a;

	for (int ** ptr = arr ; ptr <= arr + row - 1 ; ptr ++) {

	
		for ( int * ptr2 = *ptr ; ptr2 <= *ptr + col -1; ptr2++ ) {
		
		    
			for ( int * ptr3 = ptr2 ; ptr3 <= *ptr + col -1; ptr3++ ) {
		
		    		if ( *ptr3 <  *ptr2 ) {
 					
					a = *ptr3;
					*ptr3 = *ptr2;
					*ptr2 = a;
		    		}
			 }
		}
		cout << endl;
	}




}





int main (){

   int row;
   int col;
   cout << "input rows --->  ";
   cin >> row ;
   cout << "input colums ---> ";
   cin >> col;


   int **arr = new int *[row];

	for (int ** ptr = arr ; ptr <= arr + row - 1 ; ptr ++) {

	   *ptr = new int [col];
	
		for ( int * ptr2 = *ptr ; ptr2 <= *ptr + col -1; ptr2++ ) {
		
		   *ptr2 = rand() % 30;
		}

	}


   printarr (arr, row , col);
   sortarr (arr, row , col);
   printarr (arr, row , col);





















	return 0;
}
