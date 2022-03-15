#include <iostream>
using namespace std;

void rakirofka (int *a, int *b);


int main (){

  int a,b;
  cout << "input a ---> ";
  cin >> a;
  cout << "input b ---> ";
  cin >> b;

  rakirofka(&a, &b);

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;






	return 0;
}



void rakirofka (int *a, int *b){

   int r;
   
    r = *a;
   *a = *b;
   *b = r;

}
