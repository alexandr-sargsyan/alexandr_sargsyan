#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;
 
int main (int argc , char * argv[]){


   double mayrgumar = atof(*(argv + 1));
   int amis = atof(*(argv + 3));
   double tokos = atof(*(argv + 2)) / 12;

	 
   double tarberutyun;
   double a = mayrgumar;
   
   time_t now = time (0);
   time_t now2 = time (0);
	

	for (int i = 1; i <= amis; i++){

	mayrgumar = mayrgumar + mayrgumar * tokos / 100;
	tarberutyun = mayrgumar - a;

	cout << ctime(&(now += (30.458)*24*60*60))  << " avelacac gumar = " << tarberutyun << endl;     // < 30.458> - tiv@ ta mijin amsva orna
	cout << ctime(&(now2 += (30.458)*24*60*60))  << " mayr gumar = " << mayrgumar << endl ;         // bak@ tokos@ tama tarav ev amisav amsavchi hashvum
													// sti lriv toshni karnioq gidanq orva ver jamna 
													//etqan pox innan;   
	cout << endl;

	}

	cout << endl;


















	return 0;
}

