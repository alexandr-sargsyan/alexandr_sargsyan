#include <iostream>
#include "my_atoi.h"
using namespace std;


int my_atoi ( char * arr);

int main (int argc ,char * argv[]) {
  
   int sum = 0;
	for (int i = 1; i < argc; i++){

	sum = sum + my_atoi(*(argv + i));

	}  


    cout << sum << endl; 




}

/*
int my_atoi ( char * arr) {

   int result = 0;

 	 while (*arr != '\0' ) {
           
           	if(*arr >= '0' && *arr <= '9') {
                         
	 	result = result * 10;
		result = result + *arr - '0';
		arr++;
		} 
 		else {
		
		return 0;
		}

	}
 
 	return result;
}

*/
