
//THIS PROGRAM IS DESIGNED TO MANAGE THE FLIGHT RESERVATION TASKS FOR AIRLINE IN AN EFFICIENT MANNER 

#include<iostream>
#include<time.h>
#include<string>
#include<cstdlib>
using namespace std;

//THIS FUNCTION MANAGES ALL THE COST CALCULATIONS IN ACCORDANCE TO TRAVELLING HOURS.
int cost(int departure,int arrival,int cost_hour){
int total_cost;
    
    switch (departure)
    {
        //SWITCH STATEMENT FOR HANDLING DECISIVE OPERATIONS ACCORDING TO DEPARTURE INPUT
    case 1:
    

        switch (arrival)
        {
            //SWITCH STATEMENT FOR HANDLING DECISIVE OPERATIONS ACCORDING TO ARRIVAL INPUT
        case 2:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
        total_cost=cost_hour*6;
        cout<<total_cost<<endl;

            
            
            break;
        case 3:
        cout<<"Your flight will take 18 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*18;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 5 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*5;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 3 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*3;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;

         case 10:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;


        
        default:
        return total_cost;
        }
        break;

         case 2:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*6;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 18 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*18;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 11 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*11;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*6;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 5 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*5;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*6;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 14 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*14;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 16 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*16;
        cout<<total_cost<<endl;
            
            break;
            
            case 10:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            break;
            	default:
            		return total_cost;
            
            }

            

     break;

     case 3:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 18 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*18;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 17 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*17;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 14 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*14;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 16 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*16;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 20 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*20;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 2 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*2;
        cout<<total_cost<<endl;
            
            break;
            
        case 10:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
				default:
            		return total_cost;
            }
     break;       

     case 4:
    
        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 11 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*11;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 21 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*21;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
         case 10:
        cout<<"Your flight will take 2 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*2;
        cout<<total_cost<<endl;
            
            break;
            	default:
            		return total_cost;
            
			}
     break;       
     
      case 5:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 5 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*5;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*6;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 14 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*14;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 1 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*1;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 16 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*16;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
        total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;

             case 10:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;

           	default:
            		return total_cost;
                  
      }
break;
      case 6:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 4 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*4;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 5 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*5;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 14 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*14;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 2 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*2;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 12 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*12;
        cout<<total_cost<<endl;
            
            break;

         case 10:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;   
            	default:
            		return total_cost;
                 
      }
      break;

       case 7:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 6 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*6;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 11 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*11;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        
         case 10:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;

            	default:
            		return total_cost;
                 
      }
break;
      case 8:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 12 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*12;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 19 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*19;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 21 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*21;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 16 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*16;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 9:
        cout<<"Your flight will take 17 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*17;
        cout<<total_cost<<endl;
            
            break;

         case 10:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;

            	default:
            		return total_cost;
                 
      }
      break;
       case 9:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 15 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*15;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 16 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*16;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 2 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*2;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 8 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*8;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 12 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*12;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 13 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*13;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 17 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*17;
        cout<<total_cost<<endl;
            
            break;

         case 10:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;

            	default:
            		return total_cost;
                 
      }
      break;

       case 10:
    

        switch (arrival)
        {
        case 1:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
        case 2:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*26<<endl;
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
        case 3:
        cout<<"Your flight will take 9 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $"<<cost_hour*15<<endl;
         total_cost=cost_hour*9;
        cout<<total_cost<<endl;
            
            break;
        case 4:
        cout<<"Your flight will take 2 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*2;
        cout<<total_cost<<endl;
            
            break;
        case 5:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 6:
        cout<<"Your flight will take 7 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*7;
        cout<<total_cost<<endl;
            
            break;
        case 7:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;
        case 8:
        cout<<"Your flight will take 19 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*19;
        cout<<total_cost<<endl;
            
            break;

         case 9:
        cout<<"Your flight will take 10 hours to reach the destination : "<<endl;
        cout<<"THE TICKET PRICE IS : $";
         total_cost=cost_hour*10;
        cout<<total_cost<<endl;
            
            break;    
            	default:
            		return total_cost;
                  
  }
  	default:
            		return total_cost;
            
    }
    return total_cost;

    }
    
//THIS FUNCTION DISPLAYS THE AVAILABLE FLIGHT TIMINGS AND ALLOWS THE USER TO BOOK A FLIGHT ON A CORRESPONDING TIME
void flights_schedule(){
int time;
	string days[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout<<endl;
    cout<<"Our flights operate twice daily from your selected departure country to your chosen destination"<<endl;
    string timings[] = {
        "06:00","06:30","07:00","07:30","08:00","08:30","09:00","09:30","10:00","10:30",
        "11:00","-11:30","12:00","12:30","13:00","13:30","14:00","14:30","15:00","15:30",
        "16:00","16:30","17:00","17:30","18:00","18:30"
    };
    int n=1;
    for(int i=0;i<7; i++) {
    	cout << days[i] << ":\n";
    	for(int j=0;j<2;j++){
            //display of the list of available flights with timings
        int dep_timings=rand()%24; 
        cout<<"\t"<<n<<"- Departure Time: "<<"- "<<timings[dep_timings]<<endl;
        cout<<endl;
        n++;
        }
	}	
    //taking chosen time as an output
    do {cout<<"ENTER THE TIME YOU WANT TO CHOOSE : ";
    cin>>time;
    cout <<endl;
    if(time>14||time<=0){
        cout<<"PLEASE SELECT FROM THE GIVEN TIME OPTIONS."<<endl;
    }
    }while(time>14||time<=0);
    
	
}

//THIS FUNCTION TAKES THE CHOOSEN CLASS AS A ARGUMENT AND ASSIGNES "cost_hour" the required value
int section(int * cost_hour,int type){
 
    if(type==1){
        *cost_hour=125 ;
           return *cost_hour;
        }
        if(type==2){
        *cost_hour=160 ;
           return *cost_hour;
        }
    
    if(type==3){
        *cost_hour=180 ;
           return *cost_hour;
        }
    
    if(type==4){
        *cost_hour=200 ;
           return *cost_hour;                       
        }
        
        return 0;
  
}
//this function allows the user to opt for only shipping certain items and describes the requirment

int cargo()
{
    int tell;

    int opt,country,country2;
    double cost;
    
    cout <<endl;
    
        do
        {
    cout <<"\n1. Pakistan\n2. India\n3. USA\n4. England\n5. Qatar\n6. UAE\n7. China\n8. Australia\n9. Canada\n10. Germany"<<endl;
    cout <<"Which country you want to deliver :  ";
    do
    {
    cin >>country;
    cout <<endl;
    if(country>10||country<=0)
    {
        cout <<"Please select from the given options.";
    }
    }while(country<=0||country>10);
    
        }while(country>10);

    do
    {
    
        
        cout <<"\n1. Pakistan\n2. India\n3. USA\n4. England\n5. Qatar\n6. UAE\n7. China\n8. Australia\n9. Canada\n10. Germany"<<endl;
        cout <<"From which country you are delievering : ";
        do
        {
        cin >>country2;
        cout <<endl;
        if(country2<=0||country2>10)
        {
            cout <<"Select from the given options : ";
        }
        }while(country2<=0||country>10);

    if(country2==country)
    {
        cout <<"You can't deliever to the country where you are already present."<<endl;
    }

    }
    while(country==country2);
    do
    {
    cout <<endl;
    cout <<"Please select from the permissible items :"<<endl;
    cout <<"Permissible items for cargo shipment include:\n";
    cout <<"1. Parcels($5 per kg)\n";
    cout <<"2. Electronics and fragile items($10 per kg)\n";
    cout <<"3. Clothing and personal effects($3 per kg)\n";
    cout <<"4. Household goods and appliances($8 per kg)\n";
    cout <<"5. Non-perishable food items($6 per kg)"<<endl;
    cout <<"Please select an option : ";
    do
    {
    cin >>opt;

    if(opt<=0||opt>5)
    {
        cout <<"Select from the given options : ";
    }
    }while(opt<=0||opt>5);
    
    }
    while(opt>=6);

    int weight;
    cout <<endl;
    cout <<"Enter the weight in kilograms : ";
    do
    {
    cin >>weight;
    cout <<endl;
    if(weight<0||weight>100)
    {
        cout <<"Enter within o and 100 : ";
    }
    }while(weight<0||weight>100);
    cout <<"\nWhat type of delivery service would you prefer : \n";

    do
    {
    cout <<"1. Standard Delivery\n";
    cout <<"2. Next Day Delivery(1.5 times of amount)\n";
    cout <<"3. Same Day Delivery(2 times of amount)\n";
    cout <<"Please select any option : ";
    
    cin >>tell;
    if(tell>3||tell<=0)
    {
        cout <<"\nPlease select from the allowed options.\n";
    }
    }
    while(tell>3||tell<=0);


    cout <<endl;

    switch (opt)
    {
        case 1:
        if(tell==1)
        {
        cost=weight*5.0;
        }
        else if(tell==2)
        {
            cost=((weight*5.0)*1.5);
        }
        else
        {
            cost=((weight*5.0)*2.0);
        }
        cout <<"The cost for delievery is : $";
        cout <<cost;
        cout <<endl;
        break;
        case 2:
        if(tell==1)
        {
        cost=weight*10.0;
        }
        else if(tell==2)
        {
            cost=((weight*10.0)*1.5);
        }
        else
        {
            cost=((weight*10.0)*2.0);
        }
        cout <<"The cost for delievery is : $";
        cout <<cost;
        break;

        case 3:
        if(tell==1)
        {
        cost=weight*3.0;
        }
        else if(tell==2)
        {
            cost=((weight*3.0)*1.5);
        }
        else
        {
            cost=((weight*3.0)*2.0);
        }
        cout <<"The cost for delievery is : $";
        cout <<cost;
        break;

        case 4:
        if(tell==1)
        {
        cost=weight*8.0;
        }
        else if(tell==2)
        {
            cost=((weight*8.0)*1.5);
        }
        else
        {
            cost=((weight*8.0)*2.0);
        }
        cout <<"The cost for delievery is : $";
        cout <<cost;
        break;

        case 5:
        if(tell==1)
        {
        cost=weight*6.0;
        }
        else if(tell==2)
        {
            cost=((weight*6.0)*1.5);
        }
        else
        {
            cost=((weight*6.0)*2.0);
        }
        cout <<"The cost for delievery is : $";
        cout <<cost;
        break;
    
        default:
        break;
    }
    
   
    return cost;
}

//manages the user luggage items and describe the allowed limit of luggage that can be carried 
int luggage(int type)
{
    int carry_on,carry_on_limit,weight,weight_limit;
    int luggagecost=0;
    

    
    switch(type)
    {
        case 1:
        cout <<"The allowed weight for the luggage is 20 Kg."<<endl<<"If the luggage weighs more than this limit you'll have to pay $-35 per Kg"<<endl;
        break;

        case 2:
        cout <<"The allowed weight for the luggage 25 Kg"<<endl<<"If the luggage weighs more than this limit you'll have to pay $-50 per Kg"<<endl;
        break;

        case 3:
        cout <<"The allowed weight for the luggage is 30 Kg"<<endl<<"If the luggage weighs more than this limit you'll have to pay $-70 per Kg"<<endl;
        break;

        case 4:
        cout <<"The allowed weight for the luggage is 35 Kg"<<endl<<"If the luggage weighs more than this limit you'll have to pay $-90 per Kg"<<endl;
        break;

        default:
        break;

    }
    
    cout <<"Enter the weight of the luggage in kilograms : ";
    do
    {
    cin >>weight;
    cout <<endl;
    if(weight<0||weight>100)
    {
        cout <<"Enter within 0 and 100 : ";
    }
    }while(weight<0||weight>100);
    do
    {
    switch(type)
    {
        case 1:
        cout <<"The allowed weight as carry-on is 10 Kg"<<endl;
        carry_on_limit=10;
        break;

        case 2:
        cout <<"The allowed weight as carry-on is 12 Kg"<<endl;
        carry_on_limit=12;
        break;

        case 3:
        cout <<"The allowed weight as carry-on is 15 Kg"<<endl;
        carry_on_limit=15;
        break;

        case 4:
        cout <<"The allowed weight as carry-on is 18 Kg"<<endl;
        carry_on_limit=18;
        break;

        default:
        break;

    }

    cout <<"Please enter the weight of you carry-on luggage : ";
    do
    {
    cin >>carry_on;
    if(carry_on<0||carry_on>45)
    {
        cout <<"Please enter within 0 and 45 : ";
    }
    }while(carry_on<0||carry_on>45);
    if((type==1&&carry_on<=10)||(type==2&&carry_on<=12)||(type==3&&carry_on<=15)||(type==4&&carry_on<=18))
    {
    switch(type)
    {
        case 1:
        weight_limit=20;
        if(weight>weight_limit)
        {
            cout <<"\nYour luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            luggagecost=(weight-weight_limit)*35;
            cout <<"The cost_hour to pay for luggage is : $"<<luggagecost<<endl;
