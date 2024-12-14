#include <iostream>
using namespace std;

int luggage(int total_cost,int type)
{
    int carry_on,carry_on_limit,weight,weight_limit,price;
    string ticket;
    
    
    cout <<"Enter the weight of the luggage in kilograms : ";
    cin >>weight;
    cout <<"Please enter the weight of you carry-on luggage : ";
    cin >>carry_on;

    if((type==1&&carry_on<10)||(type==2&&carry_on<12)||(type==3&&carry_on<15)||(type==4&&carry_on<18))
    {
    switch(type)
    {
        case 1:
        weight_limit=20;
        if(weight>weight_limit)
        {
            cout <<"Your luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*35;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs is with in the limits.\nYou dont need to pay any extra amount."<<endl;
        }
        break;

        case 2:
        weight_limit=25;
        if(weight>weight_limit)
        {
            cout <<"Your luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*50;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs is with in the limits.\nYou dont need to pay any extra amount."<<endl;
        }
        break;

        case 3:
        weight_limit=30;
        if(weight>weight_limit)
        {
            cout <<"Your luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*70;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs is with in the limits.\nYou dont need to pay any extra amount."<<endl;
        }
        break;

        case 4:
        weight_limit=35;
        if(weight>weight_limit)
        {
            cout <<"Your luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*90;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs is with in the limits.\nYou don't need to pay any extra amount."<<endl;
        }
        break;

        default:
        break;

    }
    }
    else 
    {
        cout <<"You are not allowed to carry that much laggage along with you (carry on)"<<endl;
    }

    return price;
}
int main()
{
    
    int ticket;
    cout <<"Which type of ticket you want to buy : \n";
    cout <<"1. Economy\n";
    cout <<"2. Premium\n";
    cout <<"3. Business\n";
    cout <<"4. First Class\n";
    cin >>ticket;

   int total_price=luggage(650,ticket);

   cout <<endl<<total_price;

    return 0; 
}