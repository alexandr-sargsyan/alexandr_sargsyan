#include <iostream>
using namespace std;

int factorial (int a) {
	
	if (a > 1) 
	{

	return a * factorial(a-1);
	
	}
	
	return 1;
}


int main (){

	cout << factorial(5) << endl;

return 0;
}
