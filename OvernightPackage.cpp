#include "OvernightPackage.h"
#include <iostream>

using namespace std;

OvernightPackage::OvernightPackage(){
	FlatRateIncrease= 0;
}
OvernightPackage::OvernightPackage(double theFlatRateIncrease){
	FlatRateIncrease= theFlatRateIncrease;
}

double OvernightPackage::getFlatRateIncrease(){
	return FlatRateIncrease;
}

void OvernightPackage::setFlatRateIncrease(double flat){
	FlatRateIncrease = flat;
}
double OvernightPackage::calcOvernightPackage(){
	return weight*cost + FlatRateIncrease;
}

void OvernightPackage::printInfo(){
	cout<<"Package weight is"<<weight<<endl;
	cout<<"Cost per ounce is $"<<cost<<endl;
	cout<<"Cost to deliver as Over Night :$"<<FlatRateIncrease<<endl;
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
	cout<<"Total Cost for shipment: $"<<calcOvernightPackage()<<endl;

}