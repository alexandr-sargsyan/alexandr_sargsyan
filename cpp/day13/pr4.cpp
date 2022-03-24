#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int l(string a)
{
int n=0;
for(int i =0;  a[i]!='\0'; i++)
{
n++;
}
return n;
}
int main( ){


    cout << "armenian - english click 1    english - armenian click 2" << endl;
    int number;
    cin >> number;
    

string text;
string text1;
cout << "Input : ";

string input ;
cin.ignore();
 getline(cin , input);
 int count = 1;
     for (int i = 0; i < input.length() ; i++){
 
     if (input[i] == ' ' ) {
 
     count++;
    }
 
 
 }

    string  argv [count];

    int l = 0 ;

  for(int j = 0; j < count; j++) {
   
      string t ;

      for (int i = l; i <input.length() ; i++) {
   
         if(input[i] == ' ') {
            
             l = i;
        
             l = l + 1;
          break;
            }

   t = t +input[i];
   
   }
      argv[j] = t;

  }


for (int i = 0; i < count ; i++) {
 
    string word;
    word = argv [i];


ifstream myword("hy-en.txt");
string bar;


while(getline(myword,bar)){
   
    string t="";
    string t2="";
   
    int n  = 99999;

    for (int i = 0; i < 20; i++) {

        if(bar[i]== '-'){

            i = i + 2;

                for (int j = i ; ; j++){
    
                   

                    if(bar[j] == '\0') {
                    i = n;
                    break;

               }
                 t2 = t2 + bar[j];

             }    
    
        }else {

            if (i == n) {

         break;
             }
        
             t = t + bar[i];
         }
  }
    if( number == 1 && word == t){
    text = text + t2 + " " ;
    }


    if( number == 2 && word == t2){

     text = text + t + " " ;
       }


}

}

cout << text << endl;



return 0;
 

    
}




