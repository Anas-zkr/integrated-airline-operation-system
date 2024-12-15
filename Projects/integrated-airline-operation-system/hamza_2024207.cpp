#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std ;
void taking_flight_info(int departure,int arrival);
void flights_schedule();
int main(){
	
	int departure,arrival;

	taking_flight_info( departure, arrival);
		
	srand(time(0)); 
	flights_schedule();



return 0;
}
void taking_flight_info(int departure,int arrival){

	cout<< "1. Pakistan" <<endl <<"2. India" <<endl << "3. USA"<<endl <<"4. England" <<endl <<"5. Qatar"<<endl;
	cout<< "6. UAE"<<endl <<"7. China" <<endl <<"8. Australia"<<endl <<"9. Canada"<<endl <<"10. Germany"<<endl;
    cout<<"Select the country for departure : "<<endl;
    cin >> departure;

    
    switch (departure) {
        case 1:
		cout<<"Pakistan";
		break;
        case 2: 
		cout<<"India";
		break;
        case 3: 
		cout<<"USA";
		break;
        case 4: 
		cout<<"England";
		break;
        case 5: 
		cout<<"Qatar";
		break;
        case 6: 
		cout<<"UAE";
		break;
        case 7: 
		cout<<"China";
		break;
        case 8: 
		cout<<"Australia";
		break;
        case 9: 
		cout<<"Canada";
		break;
        case 10: 
		cout<<"Germany";
		break;
        default: 
		cout<<"Invalid choice";
		break;
    }
    cout<<endl; 
	cout<<"\t**Arrival Country"<<endl;
    cout<<"Select the country which you want to visit : ";
    cin>>arrival;
    switch(arrival){
    	
    	case 1: 
		cout<<"Pakistan";
		break;
        case 2:
		cout<<"India";
		break;
        case 3: 
		cout<<"USA"; 
		break;
        case 4: 
		cout<<"England"; 
		break;
        case 5: 
		cout<<"Qatar"; 
		break;
        case 6: 
		cout<<"UAE"; 
		break;
        case 7: 
		cout<<"China"; 
		break;
        case 8: 
		cout<<"Australia"; 
		break;
        case 9: 
		cout<<"Canada"; 
		break;
        case 10: 
		cout<<"Germany"; 
		break;
        default: 
		cout<<"Invalid arrival country";
		break;
    	}
    	
    }
    void flights_schedule(){
	
	string days[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout<<endl;
    cout<<"Our flights operate twice daily from your selected departure country to your chosen destination"<<endl;
    string flight_timings[] = {
        "06:00","06:30","07:00","07:30","08:00","08:30","09:00","09:30","10:00","10:30",
        "11:00","11:30","12:00","12:30","13:00","13:30","14:00","14:30","15:00","15:30",
        "16:00","16:30","17:00","17:30","18:00","18:30","19:00","19:30","20:00","20:30",
        "21:00","21:30","22:00","22:30","23:00","23:30"
    };
    
    for(int i=0;i<7; i++) {
    	cout << days[i] << ":\n";
    	for(int j=0;j<2;j++){
        int dep_timings=rand()%36; 
        cout<<"\tDeparture Time: "<<flight_timings[dep_timings]<<endl;
        cout<<endl;
    }


	}
}