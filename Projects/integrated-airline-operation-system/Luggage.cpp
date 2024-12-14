#include <iostream>
using namespace std;

int luggage(int type)
{
    int carry_on,carry_on_limit,weight,weight_limit,price=0;
    string ticket;
    

    
    switch(type)
    {
        case 1:
        cout <<"The allowed weight fo the luggage is 20 Kg"<<endl;
        break;

        case 2:
        cout <<"The allowed weight for the luggage 25 Kg"<<endl;
        break;

        case 3:
        cout <<"The allowed weight for th luggage is 30 Kg"<<endl;
        break;

        case 4:
        cout <<"The allowed weight for th luggage is 35 Kg"<<endl;
        break;

        default:
        break;

    }
    
    cout <<"Enter the weight of the luggage in kilograms : ";
    cin >>weight;
    cout <<endl;

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
    cin >>carry_on;

    if((type==1&&carry_on<=10)||(type==2&&carry_on<=12)||(type==3&&carry_on<=15)||(type==4&&carry_on<=18))
    {
    switch(type)
    {
        case 1:
        weight_limit=20;
        if(weight>weight_limit)
        {
            cout <<"\nYour luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*35;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"\nYour luggage weighs with in the limits.\nYou dont need to pay any extra amount.\n"<<endl;
        }
        break;

        case 2:
        weight_limit=25;
        if(weight>weight_limit)
        {
            cout <<"\nYour luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*50;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs with in the limits.\nYou dont need to pay any extra amount.\n"<<endl;
        }
        break;

        case 3:
        weight_limit=30;
        if(weight>weight_limit)
        {
            cout <<"\nYour luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*70;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs with in the limits.\nYou dont need to pay any extra amount.\n"<<endl;
        }
        break;

        case 4:
        weight_limit=35;
        if(weight>weight_limit)
        {
            cout <<"\nYour luggage weighs more than the limit.\nOver weight fees will be charged per kilogram."<<endl;
            price=(weight-weight_limit)*90;
            cout <<"The price to pay for luggage is : $"<<price;

        }
        else
        {
            cout <<"Your luggage weighs with in the limits.\nYou don't need to pay any extra amount.\n"<<endl;
        }
        break;

        default:
        break;

    }
    }
    else 
    {
        cout <<"\nYou are not allowed to carry that much laggage along with you (carry on)"<<endl;
        cout <<"Please carry weight with in the limits.\n"<<endl;
        
    }
    }
    while(!(carry_on <=carry_on_limit));

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

   int total_price=luggage(ticket);

    return 0; 
    
}
