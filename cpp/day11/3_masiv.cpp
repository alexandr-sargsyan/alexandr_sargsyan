#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;                                       
 
int main (){

  // int a;
  //cout << "input size array:  ";
  //cin >> a;
   

  // mishtchi ashxatum bayc  ((

   int a = 8;
   int arr[a];


	for (int i = 0; i < a; i++){

	arr[i] = rand() % 250 ; 

	cout << arr[i] << ", "; 				 

	}



   int q = 0;
   int w = 0;

   int q2 = 0;
   int w2 = 0;
	
	for (int i = 0; i < a; i++){
 
 		if (arr[i] < arr[i+1]) {
			
			q = i;
			
			for (int j = i; j < a ; j++) {


				if(arr[j] > arr[j+1]) {
				
				w = j;
				break;
				}
			
			}
	
			i = w;
		}

	
		if( (w - q) > ( w2 - q2 )) {

		w2 = w;
		q2 = q;
		}
	


	} 

   cout << endl << q2 << " & " << w2 << " - indexnery " << endl;


	for (int i = q2; i <= w2 ; i++){
	

	cout << arr[i] << ", "; 
	}


	cout << endl;








	return 0;
}
