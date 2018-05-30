#include<iostream>
#include<string>
#include<vector>
#include "cons.cpp"

using namespace std;

void login(vector<User>& UsersList);
void regis(vector<User>& UsersList);

int main(){
	vector<User> myUser;
	
	int op;
	
	cout << "======================================================USERS=============================================================" << endl;
	
	cout << "Hi there! Getting started? Register for your account first :D\n" << endl;
		
	regis(myUser);
	
	while(true){
		
		cout << "What do you want to do?" << endl;
		cout << "1.Register\n2.Login\nEnter other key to 'Exit Program'" << endl;
		cout << "Input: ";
		
		cin >> op;
		
		switch(op){
			case 1:
				regis(myUser);
				break;
			
			case 2:
				login(myUser);
				return 0;
				
			default:
				cout << "Bye!" << endl;
				return 0;
		}
	}
	
	return 0;
};


void regis(vector<User>& UsersList){
	string inp1;
	string inp2;
	string inp3;
	
	cout << "Registration\n" << endl;
	
	cout << "username: ";
	cin >> inp1;
	
	cout << "id: ";
	cin >> inp2;
	
	cout << "password: ";
	cin >> inp3;
	
	User newUser(inp1,inp2,inp3);
	UsersList.push_back(newUser);
};


void login(vector<User>& UsersList){
	string inpid;
	string inppw;
	string inpuser;
	
	bool tf = true;
	while(true){
		cout << "id: ";
		cin >> inpid;
		cout << "password: ";
		cin >> inppw;
		
		for (int i = 0; i< UsersList.size(); ++i){
			if(UsersList[i].getID() == inpid && UsersList[i].getPass() == inppw){
				inpuser = UsersList[i].getUser();
				cout << "Logged in as " << inpuser << endl;
				tf=false;
			}	
		} 
		
		if(tf==false){
			break;
		}
		
		cout << "Wrong id and password." << endl;
		cout << "Please try again." << endl;
		tf=true;
			
	}
};


