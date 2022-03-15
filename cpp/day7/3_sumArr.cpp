#include <iostream>
using namespace std;




void arrsum(int *a , int size);


int main (){

   int arr[] = {1, 3, 5, 7, 9};

//   arrsum (arr, sizeof(arr)/sizeof(arr[0]));     //es ver ozinqvech hashvinq 
   
   arrsum (arr,5);







	return 0;
}




/*
void arrsum(int *a, int size) {             // esela ashxatum uxxaki nerqevin@ aveli hetaqrqira           

   
   int sum = 0;


	for (int i = 0; i < size ; i++) {

          sum = sum + *(a + i); 


	}

  cout << "sum = " << sum << endl;

} */



void arrsum(int *a, int size) {

   
   int sum = 0;


	for (int *i = a; i <= &a[size - 1] ; i++) {

          sum = sum + *(i); 


	}

  cout << "sum = " << sum << endl;

}






















