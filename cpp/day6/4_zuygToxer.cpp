#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main() {


   int r,c;
   cout << "input rows:  ";
   cin >> r;
   cout << "input colume : ";
   cin >> c;
   int arr[r][c];
   bool t = false;

	for (int i = 0; i < r; i++){

	cout << i << " --> ";
		for(int j = 0; j < c; j++){

		arr[i][j] = rand() % 500;
		cout << arr[i][j] << ", ";
		}
	
	cout << endl;
	}


   cout << endl;
	
	for (int i = 0; i < r; i++){

	int a = 0;
		for(int j = 0; j < c; j++){

		   if(arr[i][j] % 2 == 1) {		
		     
 	           a++;
		   break;
		   }
		}
	if (a == 0) {

	t = true;
	cout << i << " - rd tox, ";
	}
	a = 0;	
	
	
	}
  
   cout << endl;  

	if (!t) { 

	cout << "Nooo !!!!!! \n";
	}

























	return 0;
}
