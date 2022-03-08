#include <iostream>
using namespace std;


void  nahanj_tari (){

int tari;
int t = 1;
cout << " vor tarin e hima?  ";
cin >> tari;
while (t){
 if (tari % 4 == 0) {
        if (tari % 100 == 0) {
            if (tari % 400 == 0) {
                cout << tari << "\n";
                 tari++;
                 t++;
             }
            else  {
                tari++;
                  }
        }
        else  {
            cout << tari << " \n";
             tari++;
             t++;
              }
    }
    else {
        tari++;
          }
if (t==21) {break;}
}

    
}



int main (){

	nahanj_tari();



return 0;
}
