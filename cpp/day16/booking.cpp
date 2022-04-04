#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int menu(){

cout << "| Menu | choose agent(0) :: client(1) |  ";
int choose;
cin >> choose ;

return choose;


}

   char p_m (bool a) {

	if (a){

	return '+';
   	}else{
	
	return '-';
	}

  }


int main(){

    int a;
    a = menu();

  if(a == 0) {   
 
    string rows = "";
    string a;
    string b;

 
            cout << "Enter city: ";
            getline(cin,a);
            getline(cin,a);
            rows += a + " ";
                        

            cout << "Enter hotel name: ";
            getline(cin,a);
            rows += a + " ";
            
            cout <<"Enter star rate: ";
            getline(cin,a);
            rows += a + " ";


            cout << "Enter singl room: ";
            getline(cin,a);
            rows += a + " ";
            
            if(a != "0"){
            
                cout << "Enter per night price: " ;
                getline(cin,a);
                rows += a + " ";
            }
            else{
                rows += a + " ";

            }


            cout << "Enter twin room: ";
            getline(cin,a);
            rows += a + " ";
            
            if(a != "0"){
            
                cout << "Enter per night price: " ;
                getline(cin,a);
                rows += a + " ";
            }
              else{
                    rows += a + " ";

            }


            cout << "Enter triple room: ";
            getline(cin,a);
            rows += a + " ";

              if(a != "0"){
            
                cout << "Enter per night price: " ;
                getline(cin,a);
                rows += a + " ";
            }
               else{
                    rows += a + " ";

            }



           
            cout << "Enter 4  room: ";
            getline(cin,a);
            rows += a + " ";
  
              if(a != "0"){
            
                cout << "Enter per night price: " ;
                getline(cin,a);
                rows += a + " ";
            }

               else{
                    rows += a + " ";

            }


            cout << "Enter existing of spa (0/1): ";
            getline(cin,a);
            rows += a + " ";
          

            cout << "Enter existing of gym (0/1): ";
            getline(cin,a);
            rows += a + " ";
         
            cout << "Enter existing of wi-fi (0/1): ";
            getline(cin,a);
            rows += a + " ";
  
            cout << "Enter existing of parking (0/1): ";
            getline(cin,a);
            rows += a + " ";
         
            

    

	ofstream file("booking.txt", ios::app);
	file << rows << endl;
	file.close();

  }



////////////////////////////////////////////////////////////



  if(a == 1){

    struct s_hotel{
	string city;
	string hotelname;
	int star;
	int singlroom;
	int p1_price;
        int twinroom;
	int p2_price;
        int tripleroom;
	int p3_price;
        int r4room;
	int p4_price;
	bool spa;
	bool gym;
        bool wifi;
	bool parking;
    };


    ifstream line;
    string str = "";
    int rows = 0;
    line.open("booking.txt");
    while(getline(line,str)){
        rows++;
    }

    line.close();
  



        struct s_hotel hotel[rows];

	int parametr = 15;                              // parametreri qanakna anun qaxaq parking ev ayl

        string s = "";
        string agent[parametr];
    
        ifstream booklist;
	booklist.open("booking.txt");
        int i = 0, count = 0; 
    

	while(!booklist.eof()){
	
            booklist >> str;

            agent[i] = str;
	    i++;

            if(i == parametr){
            
            hotel[count].city = agent[0];
            hotel[count].hotelname = agent[1]; 
            hotel[count].star = stoi(agent[2]);
            hotel[count].singlroom = stoi(agent[3]);   
	    hotel[count].p1_price = stoi(agent[4]);       
            hotel[count].twinroom = stoi(agent[5]);
            hotel[count].p2_price = stoi(agent[6]);  
            hotel[count].tripleroom = stoi(agent[7]); 
            hotel[count].p3_price = stoi(agent[8]);
            hotel[count].r4room = stoi(agent[9]); 
            hotel[count].p4_price = stoi(agent[10]);
	    hotel[count].spa = stoi(agent[11]); 
            hotel[count].gym = stoi(agent[12]); 
            hotel[count].wifi = stoi(agent[13]); 
            hotel[count].parking = stoi(agent[14]); 
            
            i = 0;
            count++;

            }

            
            
            }

	booklist.close();

       


//--------------------------------------------------->>>>>>>>>>>>>>>>>   klient 


   cout << "List.am" << endl;	
   cout << "Input Parametrs --> 0-search | 1-citi | 2-star | 3-qani_texanoc | 4-price | 5-spa | 6-gym | 7-wi-fi | 8-parking  " << endl;
   bool a = true;
   bool b1 [8];
  
	for(int i = 0; i < 8; i++) {

		b1[i] = false; 
	}

   string c1;
   int s2;
   int q3;
   int p4_1;
   int p4_2;
   bool s5;
   bool g6;
   bool w7;
   bool p8;

   while (a){

	int i;
	cout << endl << "Input Parametrs --->  ";
	cin >> i;
                                        
	switch (i){
		
	case 0:
		a = false;
		break;
		
	case 1:
		cout << "imput citi --->  ";
		cin.ignore();
		getline(cin, c1);
		b1[0] = true;
	        break;

	case 2:
		cout << " imput starr --->  ";
		cin >> s2;
		b1[1] = true;
		break;

	case 3:
		cout << "imput qani texanoc --->  ";
		cin >> q3;
		b1[2] = true;
		break;
		
	case 4:
		cout << "imput MIN price --->  ";
		cin >> p4_1;
		cout << "input MAX price --->  ";
		cin >> p4_2;
		b1[3] = true;
		break;

	case 5:
		cout << "imput spa 0/1 --->   ";
		cin >> s5;
		b1[4] = true;
		break;

	case 6:
		cout << "imput gym 0/1 --->  ";
		cin >> g6;
		b1[5] = true;
		break;
	
	case 7:
		cout << "imput wi-fi 0/1 --->  ";
		cin >> w7;
		b1[6] = true;
		break;

        case 8:
		cout << "imput parking 0/1 --->  ";
		cin >> p8;
		b1[7] = true;
		break;



	}

   } 


	if(b1[3] && !(b1[2])) {

		cout << ">>>>>>>>>>>||||| Nsheq te qani texanoc senyaki hamar ||||| <<<<<<<<<<<<<<<<<"<< endl;
		return 0;
	}


 for (int k = 0; k < rows; k++) {

	if( b1[0] && c1 != hotel[k].city ) {
 
	   continue; 	
	}

 	if(b1[1] && s2 != hotel[k].star) {

		continue;
	}
	if( b1[4] && s5 != hotel[k].spa ) {
 
	   continue; 	
	}

 	if(b1[5] && g6 != hotel[k].gym) {

		continue;
	}

	if( b1[6] && w7 != hotel[k].wifi ) {
 
	   continue; 	
	}

 	if(b1[7] && p8 != hotel[k].parking) {

		continue;
	}


	if(q3 == 1) {                                       
	
		if(hotel[k].singlroom <=  0 ){
		
			continue;
		}

		if (b1[3] && ( hotel[k].p1_price < p4_1 || hotel[k].p1_price > p4_2)){

			continue; 
		}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].p1_price << "-Dram" << " SPA";
		cout <<  p_m( hotel[k].spa) << " GYM" << p_m(hotel[k].gym) << " Wi-Fi" << p_m(hotel[k].wifi) << " Parking" << p_m(hotel[k].parking) << endl;
				 continue;
	}

	else if(q3 == 2) {                                       
	
		if(hotel[k].twinroom <=  0 ){
		
			continue;
		}

		if (b1[3] && ( hotel[k].p2_price < p4_1 || hotel[k].p2_price > p4_2)){

			continue; 
		}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].p2_price << "-Dram" << " SPA";
		cout <<  p_m( hotel[k].spa) << " GYM" << p_m(hotel[k].gym) << " Wi-Fi" << p_m(hotel[k].wifi) << " Parking" << p_m(hotel[k].parking) << endl;
				 continue;

	}

	else if(q3 == 3) {                                       
	
		if(hotel[k].tripleroom <=  0){
		
			continue;
		}
		if (b1[3] && ( hotel[k].p3_price < p4_1 || hotel[k].p3_price > p4_2)){

			continue; 
		}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].p3_price << "-Dram" << " SPA";
		cout <<  p_m( hotel[k].spa) << " GYM" << p_m(hotel[k].gym) << " Wi-Fi" << p_m(hotel[k].wifi) << " Parking" << p_m(hotel[k].parking) << endl;
				 continue;
	}

	else if(q3 == 4) {                                       
	
		if(hotel[k].r4room <=  0){
		
			continue;
		}
		if (b1[3] && ( hotel[k].p4_price < p4_1 || hotel[k].p4_price > p4_2)){

			continue; 
		}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].p4_price << "-Dram" << " SPA";
		cout <<  p_m( hotel[k].spa) << " GYM" << p_m(hotel[k].gym) << " Wi-Fi" << p_m(hotel[k].wifi) << " Parking" << p_m(hotel[k].parking) << endl;
				 continue;
	}
	
	 if  (b1[2]) {

		cout << "mez etqan texanoc hyuranoc chunenq" << endl;
		break;
	}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star "  << " SPA";
		cout <<  p_m( hotel[k].spa) << " GYM" << p_m(hotel[k].gym) << " Wi-Fi" << p_m(hotel[k].wifi) << " Parking" << p_m(hotel[k].parking) << endl;
	

	
        }	


   

	
	cout << endl <<">>>>  || hyuranocy zbaxecnelu hamar greq ayd toxi arajin tivy  || <<<<  " << endl;
	int index;
	cin >> index;
		
	if(!b1[2]){
	
		cout << "duq cheq nshel te qani hoganoc senyak eq uzeum zbaxecnel " << endl;
		return 0;
	}

	
	
	if(q3 == 1) {

	hotel[index].singlroom--;
		
	cout << "duq hajoxutyamb zbaxecrelex senyak " << hotel[index].hotelname << " hyuranocum " << endl; 
	}

	else if(q3 == 2) {

	hotel[index].twinroom--;
	cout << "duq hajoxutyamb zbaxecrelex senyak " << hotel[index].hotelname << " hyuranocum " << endl;
	}

	else if(q3 == 3) {

	hotel[index].tripleroom--;
	cout << "duq hajoxutyamb zbaxecrelex senyak " << hotel[index].hotelname << " hyuranocum " << endl;
	}

	else if(q3 == 4) {

	hotel[index].r4room--;
	cout << "duq hajoxutyamb zbaxecrelex senyak " << hotel[index].hotelname << " hyuranocum " << endl;
	}





   }
	

	 

	return 0;
}
 
