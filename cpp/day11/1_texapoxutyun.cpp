#include <iostream>
using namespace std;



int main (int argc , char* argv[]){

   int arr[argc]; 
   int x,y;
   cout << " input 1-in index --->   ";
   cin >> x;
   cout << " input 2-rd index --->   ";
   cin >> y;

   char a;
	for (int i = 1; i < argc; i++) {

	   a = argv[i][x-1];
	   argv[i][x-1] = argv[i][y-1];
	   argv[i][y-1] = a; 
	   cout << argv[i] << ", ";
	}

   cout << endl << endl;

	return 0;
}
