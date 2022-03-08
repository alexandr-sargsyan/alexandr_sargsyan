#include  <iostream>
using namespace std;

void aybuben (){
	char i;
	cout << "greq 1 tar \n";
	cin >> i; 
	bool a = true;


	while (a) 
	{

	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)) 
	{

	a = false;
		
	switch (i){

		case 'a': case 'u': case 'e': case 'o': case 'y': case 'i':
		case 'A': case 'U': case 'E': case 'O': case 'Y': case 'I':
		cout << " dzaynavor e  \n";
		break;

		default :
		cout << " baxadzayn e  \n";
	        	} 


	} else {
		
		cout << "greq tarrr ";
		cin >> i;
		} 


	}


}


int main (){

aybuben();

return 0;
}














