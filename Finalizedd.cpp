
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
