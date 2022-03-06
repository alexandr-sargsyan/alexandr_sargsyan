   #include <iostream>
   using namespace std;
   
   int main (){
   
   cout << " imput number \n";
   int num; 
   cin >> num;


   int q = num;
 
             while (num){
 
                int a = num - 1;
                int b = q - a;
 
           while(a){
             cout << " ";
             a--;
 
                   }

         while (b){
           cout << "* ";
           b--;
           }
 
                 cout << "\n";
                 num--;
 
                                   }
 
 
	 return 0;
 }

