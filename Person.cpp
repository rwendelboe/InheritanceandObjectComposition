#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(){
	
	name = "EMPTY";
	address = "EMPTY";
	city = "EMPTY";
	state = "EMPTY";
	zipCode = "EMPTY";

}
Person::Person(string theName, string theAddess, string theCity, string theState, string theZipCode){
	name = theName;
	address = theAddess;
	city = theCity;
	state = theState;
	zipCode = theZipCode;
}


string Person::getName(){
	return name;
}
string Person::getAddress(){
	return address;
}
string Person::getCity(){
	return city;
}
string Person::getState(){
	return state;
}
string Person::getZipCode(){
	return zipCode;
}

void Person::setName(string n){
	name = n;
}
void Person::setAddress(string a){
	address = a;
}
void Person::setCity(string c){
	city = c;
}
void Person::setState(string s){
	state = s;
}
void Person::setZipCode(string z){
	zipCode = z;
}


