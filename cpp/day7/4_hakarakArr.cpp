#include <iostream>
using namespace std;




void arrsum(int *a , int size);


int main (){

   int arr[] = {1, 3, 5, 7, 9, 11, 78, 55, };

//   arrsum (arr, sizeof(arr)/sizeof(arr[0]));     //es ver ozinqvech hashvinq 
   
   arrsum (arr,8);



	cout << endl;



	return 0;
}

void arrsum(int *a, int size) {

   
   int sum = 0;


	for (int *i = &a[size -1]; i >= a; i--) {

          cout << *i << ", ";


	}

  

}



