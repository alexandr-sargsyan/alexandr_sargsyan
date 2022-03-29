#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;



struct info {
    string countryName;
    string capital;
    string domain;
    int population;
    int area;
    int gdp;
    int phonecode;
};
enum enumf {
    Armenia = 374,
    Russia = 7,
    France = 33,
    Germany = 49,
    Georgia = 995
};
int main(int argc , char * argv[]){

  ifstream count ("countries.txt");
  string a;
  int rows = 0;

	while (getline(count,a)){

	   rows++;           

	}
   count.close();

                                  // zangvaci chapnum voroshal @st toxeri qanaki
   struct info arr[rows];
 
  


  enum enumf arrenum[] = {Armenia,Russia,France ,Germany,Georgia};
  ifstream file ("countries.txt");
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

               arr[k].countryName = parametrer[0];
               arr[k].capital = parametrer[1];
               arr[k].domain = parametrer[2];
               arr[k].population = stoi(parametrer[3]);
               arr[k].area = stoi(parametrer[4]);
               arr[k].gdp = stoi(parametrer[5]);
               arr[k].phonecode = arrenum[k];
            
	       j = 0;
               k = k + 1;
           }
        

	} 

	file.close();                           // zangvacy arjevoralnq amen@ ira hamapatasxan
     

 



	if (strcmp(argv[1], "search") == 0){

	cout << "Input search mode (countryName / capital / domain / ) --->  ";

	string m;
        getline(cin,m);
	

	cout << endl << "Input " << m << " ---> ";
	string n ;
	getline(cin,n);	
		
		
	int index;

	if(m == "countryName") {	
		for(int i = 0; i < rows; i++) {

		   if (arr[i].countryName == n ) {
			index = i; 
			break;
			}
	
		}

	}


	else if(m == "capital") {	
		for(int i = 0; i < rows; i++) {

		   if (arr[i].capital == n ) {
			index = i; 
			break;
			}
	
		}

	}


	else if(m == "domain") {	
		for(int i = 0; i < rows; i++) {

		   if (arr[i].domain == n ) {
			index = i; 
			break;
			}
	
		}

	}

	

	for(int i = 0; i < 1; i++ ) {

	
        cout << "countryName ---> " << arr[index].countryName << endl;
     	cout << "capital ---> " << arr[index].capital << endl;
     	cout << "domain---> " << arr[index].domain << endl;
     	cout << "population ---> "<< arr[index].population << endl;
     	cout << "area ---> " << arr[index].area << endl;
     	cout << "gdp ---> " << arr[index].gdp << endl;
    	cout << "phonecode ---> " << arr[index].phonecode << endl;
	
	}


	}


							// esel search yneli hetiya 






      else if (strcmp(argv[1], "compare") == 0){



	cout << "Input first Country: ---> ";
	string c1,c2;
	getline(cin, c1);


	cout << endl <<  "Input second Country ---> ";
	getline(cin, c2);

	cout << endl << "==============================================================" << endl;

	cout << "\t\t | " << c1 << "\t |" << c2 ;

	cout << endl << "==============================================================" << endl;
		

	int index_c1 = -10;
	int index_c2 = -10;

	for (int i = 0; i < rows ; i++) {

	   if(arr[i].countryName == c1) {

	      index_c1 = i;
	   }

	
	   if(arr[i].countryName == c2) {

	      index_c2 = i;
	   }


	}

	if(index_c1 < 0 | index_c2 < 0) {

		cout << "-------- >>>> chka nman petutyun !!!  <<<< -----------" <<endl;
		return 0;
	}

	


	char mec = '>';
	char pocr = '<';
	char com;

	cout << "Capital \t |" << arr[index_c1].capital << "   \t | " << arr[index_c2].capital << endl; 
	cout << "domain  \t |" << arr[index_c1].domain  << "\t\t | " << arr[index_c2].domain << endl;

	   if (arr[index_c1].population > arr[index_c2].population) {

		com = mec;
	   }else{

		com = pocr;
		}
		
	cout << "population \t |" << arr[index_c1].population << "\t " << com << " " << arr[index_c2].population << endl;



	   if (arr[index_c1].area > arr[index_c2].area) {

		com = mec;
	   }else{

		com = pocr;
		}
		
	cout << "area \t\t |" << arr[index_c1].area << "  \t " << com << " " << arr[index_c2].area << endl;


	   if (arr[index_c1].gdp > arr[index_c2].gdp) {

		com = mec;
	   }else{

		com = pocr;
		}
		
	cout << "gdp \t\t |" << arr[index_c1].gdp << "\t\t " << com << " " << arr[index_c2].gdp << endl;

	cout << "phonecode \t |" << arr[index_c1].phonecode << "\t\t | " << arr[index_c2].phonecode << endl; 



	
	} 






	return 0;
}
