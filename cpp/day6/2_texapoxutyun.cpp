#include <stdlib.h>
#include <iostream>
using namespace std;
 
int main() {

   int r;
   int c;
   cout << " input rows matric :  ";
   cin >> r;
   cout << " input colume  matric :   ";
   cin >> c;

   int arr[r][c];


	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

		arr[i][j] = rand() % 100;

		}
	
	}




	
	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

		cout << arr[i][j] << ", ";

		}
	
	cout << endl;	
	}



   
   int mec = -999999;
   int poqr = 999999;
   int m,p,f;
   


		
	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

		if (arr[i][j] > mec){
		
		mec = arr[i][j];
		m = j;
		}

		if (arr [i][j] < poqr){

		poqr = arr[i][j];
		p = j;
		}

		
		}

	f = arr[i][m];
	arr[i][m] = arr[i][p];
	arr[i][p] = f;
	
	 mec = -999999;
         poqr = 999999;

	}






	cout << endl;
		
	for(int i = 0; i < r; i++){

		for(int j = 0; j < c; j++){

		cout << arr[i][j] << ", ";

		}
	
	cout << endl;	
	}
























	return 0;
}
