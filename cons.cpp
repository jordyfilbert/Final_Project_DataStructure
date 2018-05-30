#include "class.hpp"

using namespace std;

User::User(){
};

User::User(string username, string id, string pass){
	newUser = username;
	newID = id;
	newPass = pass;
};

string User::getUser(){
	return newUser;
};

string User::getID(){
	return newID;
};

string User::getPass(){
	return newPass;
};

void User::setUser(string username){
	newUser = username;
};

void User::setID(string id){
	newID = id;
};

void User::setPass(string pass){
	newPass = pass;
};


