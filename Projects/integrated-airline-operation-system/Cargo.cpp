#include <iostream>
using namespace std;

int cargo();
int main()
{
    int ans,price12;
    int opt;

    cout <<"\n1. Book a passenger flight \n2. Transport goods as cargo "<<endl;
    cout <<"Please choose an option : ";
    cin >>ans;
    cout <<endl;

    switch(ans)
    {
        case 1:
        break;

        case 2:
        
        price12=cargo();
        break;

        default:
        break;
    }

    
    return 0;
}

int cargo()
{
    int tell;

    int opt,country,country2;
    double cost;
    
    cout <<endl;
    
        do
        {
    cout <<"\n1. Pakistan\n2. India\n3. USA\n4. England\n5. Qatar\n6. UAE\n7. China\n8. Australia\n9. Canada\n10. Germany"<<endl;
    cout <<"Which country you want to deliever :  ";
    cin >>country;
    cout <<endl;
    if(country>10)
    {
        cout <<"Please select from the given options.";
    }
        }while(country>10);

    do
    {
    do
    {
        
        cout <<"\n1. Pakistan\n2. India\n3. USA\n4. England\n5. Qatar\n6. UAE\n7. China\n8. Australia\n9. Canada\n10. Germany"<<endl;
        cout <<"From which country you are delievering : ";
        cin >>country2;
        cout <<endl;
        if(country2>10)
        {
            cout <<"Please select from the given options."<<endl;
        }
        }while(country2>10);

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
    cin >>opt;
    
    }
    while(opt>=6);

    int weight;
    cout <<endl;
    cout <<"Enter the weight in kilograms : ";
    cin >>weight;
    cout <<endl;
    cout <<"\nWhat type of delivery service would you prefer : \n";

    do
    {
    cout <<"1. Standard Delivery\n";
    cout <<"2. Next Day Delivery(1.5 times of amount)\n";
    cout <<"3. Same Day Delivery(2 times of amount)\n";
    cout <<"Please select any option : ";
    cin >>tell;
    if(tell>3)
    {
        cout <<"\nPlease select from the allowed options.\n";
    }
    }
    while(tell>3);


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