#include <iostream>
using namespace std;


void  weeknum (){

int num;
cout << "input num  \n ";
cin >> num;
bool a = true;

	while (a) {


		if (num >= 1 && num <= 7) {
            	 a = false ;
	}       
        	else  {
		 cout << "greq [1,7] mijakayqic tiv \n";
			cin >> num;
		}	
	}
	

switch (num) {
	
		case 1:
	              cout << " erkushabti \n";
		      break;
		case 2:
                      cout << " erekshabti  \n";
                      break;
		case 3:
                      cout << " chorekshabto \n";
                      break;	
		case 4:
                      cout << " hingshabti  \n";
                      break;
		case 5:
                      cout << " urbat \n";
                      break;
		case 6:
                      cout << " shabat \n";
                      break;
		case 7:
                      cout << " kiraki  \n";
                      break;
		}


}

int main (){
	
	weeknum();

return 0;
} 





















