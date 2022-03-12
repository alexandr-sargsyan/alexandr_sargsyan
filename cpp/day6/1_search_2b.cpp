#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>

using namespace std;
                                                            // es haskanumchum es xndir@ xe chi stacvum ?
int main (){

   string text ;
   cout << "input text  \n";
   getline(cin, text);


   
   int sum = 0;
   int a = 0;
   cout << text.length() << endl;


	for (int i = 0; i < text.length(); i++) {

		 		
		if (text[i] == 'B') {
			
		a++;
		}
		
		if (a == 2 && text[i] == ' ') {
	
		sum = sum + 1;
		a = 0;
		}

		if (text[i] = ' ' &&  a != 2) {

		a = 0;
		}

	}


	cout << sum << " - bar " << endl;
	



return 0;
}
