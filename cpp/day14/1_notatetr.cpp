#include <iostream>
#include <fstream>
#include <string>

using namespace std;




int main (){
 
   string noter[20] ; 
  
int a  = 1;
while (a) {

   cout << "Input date --->  ";
   string date;
   getline(cin, date);
   date[2] = '.';
   date[5] = '.';                            // textvi fayli anuny mej /- es sinvoly chi tuylatrvm
   date = "./notes/" + date ;
        
	bool b = true ;
  	for(int i = 0; i < a; i++) {

      		  if (date == noter[i]){
        
       		   b = false;
		  }
 	}

        if(b){
	 noter[a-1] = date;
         a++;
	}
	
   ofstream file(date, ofstream::app);

   string text;
   getline(cin,text);
   file << text << endl;

   
   cout <<  "Do you want to add another note (add/exit) --->   ";
   string comand;
   getline(cin,comand);
   file.close();
   
	if (comand == "add") {

	   continue ;
	} 
	else {

		cout << endl;
		for (int i = 0; i < (a-1); i++ ) {

                   ifstream file1 (noter[i]);
                   string bar;
			  string a;
			  a = noter[i].substr(8, 10);
			 cout << a << endl;
			while(getline(file1,bar)) {

				cout << bar << endl;
			}   
		}

	
	   break;	
	}





   

}














return 0;

}
