#include <iostream>
using namespace std;

int makeres (int a , int b) 
	{
		
		return a * b;
	}



int paragic (int a , int b) 
	{
		
		return 2 * (a + b);
	}




int main (){  
  
	cout << makeres(5, 8) << endl;
 
	cout << paragic(5, 8) << endl;
   return 0;
}

