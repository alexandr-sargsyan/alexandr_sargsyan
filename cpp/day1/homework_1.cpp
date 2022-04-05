#include <iostream>
using namespace std;
int main (){
         int num;
	 int xnum;
         cout << "nermucek pataxakan tiv [0.100] mijakayqic \n";
         cin >> xnum;
      

	do{
		if( xnum < 0 || xnum >100){

                         cout << "mutqagreq [0:100] mijakayqi tiv \n ";
                         cin >> xnum;
                 

		}else{ 
		    cout << "gushakeq tivy : ";
                    cin >> num;

		 	if (num < xnum ) {
                	 cout << " porceq aveli mec tiv \n ";
                 
                 	}
 
                 	else if (num > xnum) {
                 	cout << "porceq  aveli poqr tiv \n ";
                 
                 	} else{
  			   cout << "YESSSSS! \n ";
			}
		}
	}   
	while (num != xnum);
	
	
	return 0;

}
