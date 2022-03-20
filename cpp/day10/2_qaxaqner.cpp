#include <iostream>
#include <cstdlib>
#include <ctime>                                   
#include <string>                                 
using namespace std;                               // halyam prcacchi bayc 

 int menuyHraman (void);
 void kanonner() ;
 void sksel (int a); 
 


int menu(void) {  
 
   cout<<"_____________________\n || QAXAQNER ||\n_____________________\n";
   cout<<"Menu: \n 1. Sksem es ; \n 2. Sksi kompyutery ;\n " ;
   cout<<" Yntreq tarberak : --->  ";
   int c;
   cin >> c;
   return c;
   
 }

//--------------------------------------------------------------------------------------------------------- 1


  int menuyHraman (int a) {
                                 
                    switch(a) { 
           
	                         case 1: 
                                    return 1;
       
                                 case 2:
                                    return 2;                                                 
                             
                                }

		return 99;
	}


//----------------------------------------------------------------------------------------------------------3

  void sksel (int a) {

  int x = a;

  string arr [] = {"erevan" , "stepanakert", "masvkva" , "paris" , "oslo" , "astana" , "ankara" , "baku", "amsterdam" };

 int b = rand() % 6;
 string mard ;
 bool c = false;       // es kiraca ver  2 rd ific skse 3 rord if- @ mtnevech
 bool f = true;

	  while (f) {
            
		
	  if (x == 2) {
		
		cout << arr[b] << " ---> ";
		x = 1;
		c = true;
		}

	  if (x == 1) {
		
		cout << " input --->  ";
		cin >> mard;
		x = 2;
		}

	  if ( c && arr[b][arr[b].length() - 1] != mard[0] ) {

		cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>|||||||     GAME OVER     ||||||||<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl << endl;
                     break;
		}

	if (c){
	
	arr[b] = "0000";
	};
	  
      
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

	if(arr[i][0] == mard[mard.length() - 1] ){
		
		
                b = i;
		break;
	}
		if ( i == (sizeof(arr)/sizeof(arr[0]) - 1)) {
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  ||||||  Kompi barery prcala duq haxtel ek !!!  |||||  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
                f = false ; 
		break;
                    }


	}
  }

}








int main (){

  int i = menu();


  int j = menuyHraman(i);


  sksel(j);

	
	return 0;
}
