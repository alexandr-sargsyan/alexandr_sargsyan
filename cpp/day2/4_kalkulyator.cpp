#include <iostream>
 using namespace std;
 
int main( ){
    
    double  num1,num2,resultat;
    char operatr;
    cout << " imput number   \n";
    cin >> num1;
    cout <<" imput operator  \n";
    cin >> operatr;
    cout << "imput number  \n";
    cin >> num2;
    
    switch (operatr)  {
       
	 case '*':
            resultat = num1 * num2;
            break;

        case '/':
            resultat = num1 / num2;;
            break;

        case '-':
            resultat = num1 - num2;
            break;

        case '+':
            resultat = num1 + num2;
            break;                    
    }


    cout << num1 << " " <<  operatr << " "  << num2 << " = " << resultat  << "\n";
  


    return 0;
}
