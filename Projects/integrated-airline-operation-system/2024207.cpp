#include<iostream>
#include<string>
using namespace std;

void suggestion(){
	string suggest;
	getline(cin,suggest);
	cout <<"Drop your feedback : "<<endl;
	cin>>suggest;
	cout <<"Thanks for your response."<<endl;
}
int feedback(){
	int feed;
	string rating[]={"Excellent","Good","Bad","Worst"};
	cout<<"Please share your experience below."<<endl;
	for(int i=0;i<4;i++){
		cout<<i+1<<") "<<rating[i]<<endl;
	}
	cout<<"    ";
	cin>>feed;
	while (feed < 1 || feed > 4) {
        cout << "Invalid input!"<<endl;
		cout<<" Please enter a number between 1 and 4: "<<endl;
        cin >> feed;
    }
	switch(feed){
		case 1:
		cout<<"EXCELLENT"<<endl;
		break;
		case 2:
		cout<<"Good"<<endl;
		break;
		case 3:
		cout<<"Bad"<<endl;
		break;
		case 4:
		cout<<"Worst"<<endl;
		break;
	}
	cout<<endl;
	cout << " Are you satisfied from our service (1-5)? ";
    int rate;
    cout<<endl;
    cin >> rate;
    while (rate < 1 || rate > 5) {
        cout << "How much you rate us: ";
        cin >> rate;
    }
    cout << "Rating : " << rate << "/5" << endl;
    
    suggestion();
	
}


int main(){
	
	feedback();
}
