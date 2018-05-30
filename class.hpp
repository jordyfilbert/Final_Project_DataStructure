#include <iostream>
#include <vector>

using namespace std;

class User{

	private:
		string newUser;
		string newID;
		string newPass;
		
		
	public:
		User();
		
		User(string, string, string); 
		
		string getUser();
		string getID();
		string getPass();


		void setUser(string);
		void setID(string);
		void setPass(string);
	

		
};

