#include "Package.h"
#include <iostream>

using namespace std;

Package::Package(){
	weight = 0;
	cost = 0;
}
Package::Package(int theWeight, double theCost, Person theSender, Person theReciever){
	weight = theWeight;
	cost = theCost;
	Sender.setName(theSender.getName());
	Sender.setAddress(theSender.getAddress());
	Sender.setCity(theSender.getCity());
	Sender.setState(theSender.getState());
	Sender.setZipCode(theSender.getZipCode());
	Reciever.setName(theReciever.getName());
	Reciever.setAddress(theReciever.getAddress());
	Reciever.setCity(theReciever.getCity());
	Reciever.setState(theReciever.getState());
	Reciever.setZipCode(theReciever.getZipCode());
}

int Package::getWeight(){
	return weight;
}
double Package::getCost(){
	return cost;
}
void Package::setSender(string theName, string theAddress, string theCity, string theState, string theZipCode){
	Sender.setName(theName);
	Sender.setAddress(theAddress);
	Sender.setCity(theCity);
	Sender.setState(theState);
	Sender.setZipCode(theZipCode);

}
void Package::setReciever(string theName, string theAddress, string theCity, string theState, string theZipCode){
	Reciever.setName(theName);
	Reciever.setAddress(theAddress);
	Reciever.setCity(theCity);
	Reciever.setState(theState);
	Reciever.setZipCode(theZipCode);
}


void Package::setWeight(int w){
	weight = w;
}
void Package::setCost(double c){
	cost = c;
}

double Package::calcCost(){
	return weight*cost;
}

void Package::printInfo(){
	cout<<"Package weight is"<<weight<<endl;
	cout<<"Cost per ounce is $"<<cost<<endl;
	cout<<"Sender Name: "<<Sender.getName()<<endl;
	cout<<"Sender Address: "<<Sender.getAddress()<<endl;
	cout<<"Sender City: "<<Sender.getCity()<<endl;
	cout<<"Sender State: "<<Sender.getState()<<endl;
	cout<<"Sender Zip-Code: "<<Sender.getZipCode()<<endl;
	cout<<"Reciever Name: "<<Reciever.getName()<<endl;
	cout<<"Reciever Address: "<<Reciever.getAddress()<<endl;
	cout<<"Reciever City: "<<Reciever.getCity()<<endl;
	cout<<"Reciever State: "<<Reciever.getState()<<endl;
	cout<<"Reciever Zip-Code: "<<Reciever.getZipCode()<<endl;
	cout<<"Total Cost for shipment: $"<<calcCost()<<endl;

}

