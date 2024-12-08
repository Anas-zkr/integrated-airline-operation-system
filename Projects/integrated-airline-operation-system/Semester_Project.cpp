#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void prof(string user_name, int password) {

        int pass1=1234,pass2=5678,pass3=9012,pass4=3456;
        
        cout <<"Enter username"<<endl;
        cout <<"\t";cin>>user_name;
        string *a=&user_name;
        if(user_name=="hamza" || user_name=="abdulrehman" || user_name=="mudassar" || user_name=="anas"){
            if(user_name=="hamza"){
            do{

        		cout <<"Enter password"<<endl;
        		cout <<"\t";cin >>password;
        
        
                if(password==pass1){
                    cout <<"Welcome back, Hamza! Ready for your next adventure?\n";
                        int id;
        srand(time(0));
        id =10000000+(rand()%9999999);
    
                    cout <<"Yout travel ID is :"<<id;;
        
            }
            else{
                cout <<"Enter correct password.";
            }
            }while(password!=pass1);
            }
            if(user_name=="abdulrehman"){
                do{
                	
        		cout <<"Enter password"<<endl;
        		cout <<"\t";cin >>password;
       
        
                if(password==pass2){
                    cout <<"Welcome back, Abdul Rehman! Ready for your next adventure?\n";

            }
            else{
                cout <<"Enter correct password.";
            }
            }while(password!=pass2);

            }
            if(user_name=="mudassar"){
                do{
                	
        cout <<"Enter password"<<endl;
        cout <<"\t";cin >>password;
        
        
                if(password==pass3){
                    cout <<"Welcome back, Mudassar! Ready for your next adventure?\n";

            }
            else{
                cout <<"Enter correct password.";
            }
            }while(password!=pass3);

            }
            if(user_name=="anas"){
                do{
                	
        cout <<"Enter password"<<endl;
        cout <<"\t";cin >>password;
        
        
                if(password==pass4){
                    cout <<"Welcome back, Anas! Ready for your next adventure?\n";

            }
            else{
                cout <<"Enter correct password.";
            }
            }while(password!=pass4);

            }
        }
        else{
        	cout <<"Incorrect Username.";
		}

    }
   

int main(){

    string log,username,user_name;
    int password;

    cout <<endl<<"Welcome to [Airline Name].\n";
    cout <<"Explore effortless travel management and seamless experiences.\n"<<endl;
    cout <<"Create your Travel ID to unlock a personalized and streamlined travel experience.\n";
    cout <<"If you already have an account, please log in to continue.\n login/sign up"<<endl;
    cin >>log;
    if(log=="login"){

        prof(user_name,password);

    }
    

    return 0;
}