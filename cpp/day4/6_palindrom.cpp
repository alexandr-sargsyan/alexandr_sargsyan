#include <iostream>
#include <string>
using namespace std;


int main(){

  cout << "input name  ";
  string name;
  cin >> name;  
	
	for (int i = 0; i < name.length()/2; i++ ){
	
		if ( name[i] != name[name.length() - i - 1] ) {
			
		cout << " Not palindrom !!!!";
		return 0;
		}
	}	

	cout << "This is Palindrom !!!";

	return 0;
}
