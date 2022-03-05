#include <iostream>
using namespace std;


int main (){

int num;
cout << "input num  \n ";
cin >> num;
bool a = true;

	while (a) {


		if (num >= 1 && num <= 12) {
            	 a = false ;
	}       
        	else  {
		 cout << "greq [1,12] mijakayqic tiv \n";
			cin >> num;
		}	
	}
	

switch (num) {
	
		case 1:
	              cout << " 31 \n";
		      break;
		case 2:
		      cout  << "vor tarva ? \n";	
		      
		      int tari;

		      cin >> tari;
		      
		      if (tari % 4 == 0 ) {
                      
		  	cout << " 29 \n";
			
				}
 			else {
		
			cout << "28 \n";
			
			} 
                      break;
		case 3:
                      cout << " 31 \n";
                      break;	
		case 4:
                      cout << " 30  \n";
                      break;
		case 5:
                      cout << " 31  \n";
                      break;
		case 6:
                      cout << " 30 \n";
                      break;
		case 7:
                      cout << " 31  \n";
                      break;
		case 8:
                      cout << " 31 \n";
                      break;	
		case 9:
                      cout << " 30  \n";
                      break;
		case 10:
                      cout << " 31  \n";
                      break;
		case 11:
                      cout << " 30 \n";
                      break;
		case 12:
                      cout << " 31  \n";
                      break;
		default: 
		      cout << "greq [1,12] mijakayqic tiv \n";
			cin >> num;


            };
 
    		return 0; 
};
