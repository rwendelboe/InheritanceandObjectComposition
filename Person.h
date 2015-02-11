#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
	private:
		string name;
		string address;
		string city;
		string state;
		string zipCode;

	public:
		Person();
		Person(string theName, string theAddess, string theCity, string theState, string theZipCode);


		string getName();
		string getAddress();
		string getCity();
		string getState();
		string getZipCode();

		void setName(string n);
		void setAddress(string a);
		void setCity(string c);
		void setState(string s);
		void setZipCode(string z);


};
#endif