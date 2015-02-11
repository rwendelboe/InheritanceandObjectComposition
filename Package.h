#ifndef PACKAGE_H
#define PACKAGE_H
#include "Person.h"
#include <iostream>

using namespace std;

class Package
{
	protected:
		int weight;
		double cost;
		Person Sender;
		Person Reciever;

	public:
		Package();
		Package(int theWeight, double theCost, Person theSender, Person theReciever);

		int getWeight();
		double getCost();

		void setReciever(string theName, string theAddress, string theCity, string theState, string theZipCode);
		void setSender(string theName, string theAddress, string theCity, string theState, string theZipCode);
		void setWeight(int w);
		void setCost(double c);

		double calcCost();

		virtual void printInfo();
};
#endif