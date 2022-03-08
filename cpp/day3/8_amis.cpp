#include <iostream>
using namespace std;


void amis (){

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
	              cout << " hunvar 31 \n";
		      break;
		case 2:
		      cout  << "vor tarva ? \n";	
		      
		      int tari;

		      cin >> tari;
		      
		      if (tari % 4 == 0 ) {
                      
		  	cout << " petrvar  29 \n";
			
				}
 			else {
		
			cout << " petrvar 28 \n";
			
			} 
                      break;
		case 3:
                      cout << "mart  31 \n";
                      break;
		case 4:
                      cout << "april  30  \n";
                      break;
		case 5:
                      cout << "mayis  31  \n";
                      break;
		case 6:
                      cout << "hunis  30 \n";
                      break;
		case 7:
                      cout << " hulis  31  \n";
                      break;
		case 8:
                      cout << "ogostos  31 \n";
                      break;	
		case 9:
                      cout << " september 30  \n";
                      break;
		case 10:
                      cout << " hoktember 31  \n";
                      break;
		case 11:
                      cout << " noyember 30 \n";
                      break;
		case 12:
                      cout << " dektember  31  \n";
                      break;
		

            };
 
   
}


int main (){

	amis ();


return 0;
}

