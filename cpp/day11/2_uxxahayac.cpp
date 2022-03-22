#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main (int argc, char *argv[]){
/*
	cout << "nermuceq kordinatnery ----> Ax12 y34 Bx12 y34 Cx12 y34 Dx12 y34 <---- es dzevov   \n";



	int BA_vektory_x = atoi(&(argv[3][2])) - atoi(&(argv[1][2]));
	int BA_vektory_y = atoi(&(argv[4][1])) - atoi(&(argv[2][1]));

	int CD_vektory_x = atoi(&(argv[7][2])) - atoi(&(argv[5][2]));
	int CD_vektory_y = atoi(&(argv[8][1])) - atoi(&(argv[6][1]));

	double cosinus_a = ( BA_vektory_x * CD_vektory_x ) + ( BA_vektory_y * CD_vektory_y );   // es tama et ankyan kosinusy

	if(cosinus_a == 0){

		cout << "  Ayooo !!!   \n";

	} else{

		
		cout << "  Voccc !!!  \n";
		}


*/                                                            // es verevinnela ashxatum 

	double x[4];
	double y[4];
   

	 while(true){
	
	        for(int i=0; i<4; i++){
		
		    cout << "mtcreq " << i+1 << "-i x,y  kordinatnery " << endl;
        	    cin >> x[i] >> y[i];
       			 }
        	
		if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0]) == 0 )
       
		 {
           	 cout << " Ayooo !!!!!" << endl << endl;
        	}
        		
			else
        	
				{
        
			    cout << " Vocccc !!!" << endl << endl;
     			   }


		break;
   	 }














	return 0;
}
