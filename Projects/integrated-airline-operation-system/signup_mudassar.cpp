#include<iostream>
using namespace std;

void signp(string name,string password2,string conf_pass)
 {
    
    cout<<"Please enter your name to signup :";
    getline(cin,name);

    cout<<"Enter digit password : ";
    cin>>password2;

     do{
    cout<<"Confirm Password : ";
    cin>>conf_pass;

    if (password2==conf_pass)
    {
        cout<<"You have sucessfully signed up to your account "<<endl;
    }
    else{
        cout<<"Your enter a wrong password.Please confirm again "<<endl;
    }
    }while(password2!=conf_pass);


}


int main(){

     string user2,password2,conf_pass;

      signp(user2,password2,conf_pass);

    return 0;
}