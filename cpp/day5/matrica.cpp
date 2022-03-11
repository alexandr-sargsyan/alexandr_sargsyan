#include <cstdlib>
#include <iostream>
using namespace std;

int main (){

   cout << "input size:  ";
   int size;   
   cin >> size;

   int arr[size][size];
                                            // arr input 
	for (int i = 0; i < size; i++ )  {

		for (int j = 0; j < size; j++) {

		   arr[i][j] = rand() % 9  + 1;
		}
	}





						// arr output
	for (int i = 0; i < size; i++ )  {

		for (int j = 0; j < size; j++) {

		   cout << arr[i][j] << "," ;
		}
	   
	   cout  << endl;
	}


 



   
                                                     	//  a * * * *
						     	//    a * * *
	   int sum_1 = 0;				//      a * *
							//        a *
	for (int i = 0; i < size; i++ )  {              //          a

		for (int j = i + 1; j < size; j++) {

		   sum_1 += arr[i][j] ;
		}
	}

		
	   cout  << "sum_1 = "<< sum_1 << endl;




	


		
	 
                                                     	// a
						     	// * a
	   int sum_2 = 0;				// * * a
							// * * * a
	for (int i = 1; i < size; i++ )  {              // * * * * a

		for (int j = 0; j < i; j++) {

		   sum_2 += arr[i][j] ;
		}
	}

		
	   cout << "sum_2 = " << sum_2 << endl;






		



		 
                                                     	// * * * * a
						     	// * * * a
	   int sum_3 = 0;				// * * a
							// * a
	for (int i = 0; i < size; i++ )  {              // a

		for (int j = 0; j < size - (i +1); j++) {

		   sum_3 += arr[i][j] ;
		}
	}

		
	   cout << "sum_3 = " << sum_3 << endl;








		 
                                                     	//         a
						     	//       a *
	   int sum_4 = 0;				//     a * *
							//   a * * *
	for (int i = 1; i < size; i++ )  {              // a * * * *

		for (int j = size - i; j < size; j++) {

		   sum_4 += arr[i][j] ;
		}
	}

		
	   cout << "sum_4 = " << sum_4 << endl;










		 
                                                     	// a
						     	// * a
	   int sum_5 = 0;       			// * * a
							// * a 
	for (int i = 1; i < size -1; i++ )  {           // a
			
		for (int j = 0; j < i ; j++) { 

			if ( i >= size / 2 && j + 1 >= size - i ) {
						
		             break;

			} else {
				
		   		sum_5 += arr[i][j] ;

			       }
		}
	}

		
	   cout << "sum_5 = " << sum_5 << endl;























return 0;
}
