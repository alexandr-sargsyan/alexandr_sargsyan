#include <iostream>
#include <fstream>
#include <string>

using namespace std;


   struct car {

   string brand;
   int price;
   int mileage;
   double engine;
   string gearbox;
   string color;
   };

int main (){

   cout << "List.am" << endl;	
   cout << "Input Parametrs --- > 0-search | 1-brand | 2-price | 3-mileage | 4-engine | 5-gearbox | 6-color  " << endl;
   bool a = true;
   bool b1 = false;
   bool p2 = false;
   bool m3 = false;
   bool e4 = false;
   bool g5 = false;
   bool c6 = false;

   string br1;
   int pr2_1;
   int pr2_2;
   int mi3_1;
   int mi3_2;
   double en4;
   string ge5;
   string co6;

   while (a){

	int i;
	cout << endl << "Input Parametrs --->  ";
	cin >> i;
                                         // cin.ignore()
	switch (i){
		
		case 0:
		a = false;
		break;
		
		case 1:
		cout << "imput brand --->  ";
		cin.ignore();
		getline(cin, br1);
		b1 = true;
		break;

		case 2:
		cout << " imput MIN price --->  ";
		cin >> pr2_1;
		cout << " input MAX price --->  ";
		cin >> pr2_2;
		p2 = true;
		break;

		case 3:
		cout << "imput MIN mileage --->  ";
		cin >> mi3_1;
		cout << "imput MAX mileage --->";
		cin >> mi3_2;
		m3 = true;
		break;
		
		case 4:
		cout << "imput engine --->  ";
		cin >> en4;
		e4  = true;
		break;

		case 5:
		cout << "imput gearbox --->  ";
		cin.ignore();
		getline(cin, ge5);
		g5 = true;
		break;

		case 6:
		cout << "imput color --->  ";
		cin.ignore();
		getline(cin, co6);
		c6 = true;
		break;

	}

   } 

    ifstream count ("baza.txt");
    string a1;
    int rows = 0;
  
          while (getline(count,a1)){
         
	      rows++;           
          }
    count.close();
    struct car arr[rows];   

   ifstream file ("baza.txt");
   string b = "";
   string strname  = "";
   int j = 0;
   int k = 0;
   string parametrer[6];     
   
         while (!file.eof()){
 
         file >> b;
         parametrer[j] = b;
         j++;
            
            if (j == 6) {
 
                arr[k].brand = parametrer[0];
                arr[k].price = stoi(parametrer[1]);
                arr[k].mileage = stoi(parametrer[2]);
                arr[k].engine = stod(parametrer[3]);
                arr[k].gearbox = parametrer[4];
                arr[k].color = parametrer[5];
             
                j = 0;
                k = k + 1;
            }
         
 
         } 
 
         file.close();
   

   for (int k = 0; k < rows; k++) {

	if( b1 && br1 != arr[k].brand ) {
 
	   continue; 	
	}

 	if(p2 && (arr[k].price < pr2_1 || arr[k].price > pr2_2)) {

		continue;
	}
	
	if(m3 && (arr[k].mileage < mi3_1 || arr[k].mileage > mi3_2)){
		
		continue;
	}

	if( e4 && arr[k].engine != en4){
	
		continue;
	}
	
	if(g5 && arr[k].gearbox != ge5) {
	
		continue;
	}
	
	if(c6 && arr[k].color != co6) {

		continue;
	}

	cout << arr[k].brand << " " << arr[k].price << " " << arr[k].mileage << " " << arr[k].engine << " " << arr[k].gearbox << " " << arr[k].color << endl;
   }	


	return 0;

}
