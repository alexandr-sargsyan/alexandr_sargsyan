#include <iostream>
#include <cstdlib>
#include <ctime>                                   
#include <string>                                 
using namespace std;                               // halyam prcacchi bayc 

 int menuyHraman (void);
 void kanonner() ;
 void sksel (int a); 
 


int menu(void) {  
 
   cout<<"_____________________\n || IGRA  GORODA||\n_____________________\n";
   cout<<"Menu:\n 0. Kanonner \n 1. Sksem es ; \n 2. Sksi kompyutery ;\n 3. Dursgal\n";
   cout<<" Yntreq tarberak :\n";
   int c;
   cin>>c;
   return c;
   
 }

//--------------------------------------------------------------------------------------------------------- 1


  int menuyHraman (void) {
                                 
                    switch(menu()) {  
                                 case 0:
				    kanonner();  
	 			    break;
           
	                         case1: 
                                    sksel(0);
                                    break;
       
                                 case2:
                                    sksel (1);
                                    break;
                                   
                                 case3: 
                                    return 0;
                                    break;
                                                       
                                 default :                                                     
                                    return 0;
                                }

		return 0;
	}
//------------------------------------------------------------------------------------------------------------2


void kanonner() {

cout << "qaxaqner xax qaxaqneri anunerq grum , anunnery skksvum e ayn taric vorov verjacrel e naxord masnakicy !!!";
   menu();
}

//----------------------------------------------------------------------------------------------------------3

  void sksel (int a) {

  string arr [] = {"erevan" , "stepanakert", "masvkva " , "paris" , "oslo" , "astana" , "ankara" , "baku", "amsterdam" };

 int b = rand() % 4;
 string mard ;

	  while (1) {

	
	  if (a == 1) {
		
		cout << arr[b] << " ---> ";
		a = 0;
		}

	  if (a == 0) {

		cin >> mard;
		a = 1;
		}

	  if (arr[b][arr[b].length() - 1] != mard[0] ) {

		cout << "          game over        " ;
                     break;
		}

	arr[b] = "0000";
	  
      
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

	if(arr[i][0] == mard[mard.length() - 1] ){
		
		
                b = i;
		break;
	}
		if ( i == (sizeof(arr)/sizeof(arr[0]) - 1)) {
		cout << " kompi barery prcala duq haxtel ek !!!";
                 menu();
                    }


	}
  }

}





















int main (){

sksel ( menuyHraman ( menu() )) ;








	return 0;
}
