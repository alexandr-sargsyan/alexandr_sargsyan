#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main (){

   cout << "input text: ";

   string f4 = "hello i am ITC student  and learn C++ programming language Alexandr Sargsyan name you good surname world this dog bag";
 
   ofstream file4("text.txt");
   file4.close();
  
   ifstream file("text.txt");
   file.close();
  
   ofstream file2("bazza.txt");


   string n;
   getline(cin, n);
   string s = " d " + n;
   file2 << s;
   file2.close();
   ifstream file3("bazza.txt");

   string out;

           
	while(!file3.eof()) {
	
	  string a ;
	  file3 >> a;
	   
    	  file.open("text.txt");
		
		   while(!file.eof()) {
			
			string b;
			file >> b;

			
			if (a.length() == b.length()) {
			
			   int count = 0;
			   
				for(int i = 0; i < b.length(); i++) {

					if(!(a[i] == b[i])) {
					
  					count ++;
					}
				}
				
				if (count <= 1) {

				out = out + b + " "; 

				}
			}


			
		}


	file.close();
	file4.open("text.txt");
	file4 << f4;
	file4.close();

      





	}

   
	cout << out << endl;

   file.close();
   file2.close();
	return 0;
}
