#include <iostream>
#include <cstdlib>
#include <ctime>                                   
#include <string>                                 
using namespace std;                              

 int menuyHraman (void);
 void kanonner() ;
 void sksel (int a); 
 


int menu(void) {  
 
   cout<<"_____________________\nCountries\n_____________________\n";
   cout<<"Menu: \n 1. Me \n 2.Computer\n " ;
   cout<<"Choose: " ;
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

  string arr [] = {"stepanakert","yerevan","tokio","paris", "moscow","new york", "baku","seul","tbilisi","ankara","amsterdam","bern","antananarivu","cambera","oslo","ottava","delli","copelhagen","phenian","nairobi","ulan baator","shushi","askeran","hadrut","qarvajar","bangladesh","aljir","lisabon","madrid","washington","london","don-i-rostov","sankt-peterburg","ufa","xarkov","mariupl" ,"karmir-shuka", "taxavard" , "majkalaashen","tox","gishi","xnapat" , "sarushen", "jartar", "xunushinak", "martunei", "martakert" , "ningi", "siptak-shen" , "gandzasahr","erasx","ekaterenburg"};

 int b = rand() % 15;
 string mard ;
 bool c = false;       // es kiraca ver  2 rd ific skse 3 rord if- @ mtnevech
 bool f = true;


 string ogt [100];
 int w = 0;

	  while (f) {
            
		
	  if (x == 2) {
		
		cout << arr[b];
		x = 1;
		c = true;
		}

	  if (x == 1) {
		
		cout << "  --->  ";
		cin >> mard;
			
		   for(int i = 0;i < 100;i++) {

			if(mard == ogt[i]) {
			
			cout << " >>>>>>>>>>>>    OGTAGORCAVAC QAXAQ <<<<<<<<<<<< " << endl << " >>>>>>>>>>>>     GAME OVER    <<<<<<<<<<<<<<< " << endl;
				return ;
			}
	
		   }
			
		ogt[w] = mard;
		w++;
		x = 2;
		}

	  if ( c && arr[b][arr[b].length() - 1] != mard[0] ) {

		cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     GAME OVER    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< " << endl << endl;
                     break;
		}

	if (c){
	
	arr[b] = "";
	}
	  
      
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

	if(arr[i][0] == mard[mard.length() - 1] ){
		
		bool t = true ;
		
	   for (int j = 0; j < 100; j++) {
		
		if(arr[i] == ogt[j] ) {
	
			arr[i] = "";               // es stuguma ogtagorcvaca ta che eyd bary
			i = 0;
			t = false;
		   }
		}

	  if(t){	
	     b = i;
	     ogt[w] = arr[b];
	     w++;			
	     break;
		}
	}


		if ( i == (sizeof(arr)/sizeof(arr[0]) - 1)) {
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  There are no any countries in computer, You are WIN   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
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
