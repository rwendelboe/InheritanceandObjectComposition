#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage(){
	CostPerOunceIncrease= 0;
}
TwoDayPackage::TwoDayPackage(double theCostPerOunceIncrease){
	CostPerOunceIncrease = theCostPerOunceIncrease; 
}

double TwoDayPackage::getCostPerOunceIncrease(){
	return CostPerOunceIncrease;

}

void TwoDayPackage::setCostPerOunceIncrease(double increase){
	CostPerOunceIncrease = increase;
}

double TwoDayPackage::calcCostPerOunceIncrease(){
	return weight*(cost+CostPerOunceIncrease);
}

void TwoDayPackage::printInfo(){
	cout<<"Package weight is"<<weight<<endl;
	cout<<"Cost per ounce is $"<<cost<<endl;
	cout<<"Two Day Rate increase $"<<CostPerOunceIncrease<<endl;
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
	cout<<"Total Cost for shipment: $"<<calcCostPerOunceIncrease()<<endl;

}