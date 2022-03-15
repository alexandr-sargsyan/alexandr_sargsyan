#include <iostream>
using namespace std;


void sum1(int *a, int *b, int *sum);
void sum2(int &a, int &b, int &sum);
void sum3(int a, int b, int &sum);
void sum4(int a, int *b, int &sum);
void sum5(int *a, int *b, int &sum);





int main (){

   int a,b;
   int sum = 0;
   cout << " input number a---> ";
   cin >> a;
   cout << " input number b---> ";
   cin >> b;
  
   int &sa = a;
   int &sb = b;
   int &ssum = sum;

 
   int *pa = &a;
   int *pb = &b;
   int *psum = &sum;



	sum1( &a, &b, &sum);
//	sum1(pa , pb, psum);


	sum2(sa, sb, ssum);


        sum3(a, b, ssum);           


	sum4(a, &b, ssum );

        
        sum5 (&a, &b, ssum);  



		return 0;

}


void sum1 (int *a, int *b, int *sum){ 
 
   *sum = *a + *b;
   
   cout << "sum1 = " << *sum << endl;

}



void sum2(int &a, int &b, int &sum){

  sum = a + b ;

  cout << "sum2 = " << sum << endl;


}



void sum3(int a, int b, int &sum){


  sum = a + b ;

  cout << "sum3 = " << sum << endl;



}



void sum4(int a, int *b, int &sum){

    sum = a + (*b) ;
  
    cout << "sum4 = " << sum << endl;



}



void sum5(int *a, int *b, int &sum){

   sum = *a + *b;

   cout << "sum5 = " << sum << endl;

}










