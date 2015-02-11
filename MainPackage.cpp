#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main(){

	ifstream input;
	char type;
	Package* normal;
	int weight;
	double cost;
	double FlatRateIncrease;
	double CostPerOunceIncrease;
	string name;
	string address;
	string city;
	string state;
	string zipCode;
	

	input.open("package.txt");

	if(!input){
		cout<<"There was an error while opening"<<endl;
	}
	
	while(!input.eof()){
		input >> type;
		//input.ignore();
	if (type == 'P' || type == 'p'){
		Package regular;
		//input.ignore();
		input>>weight;
		regular.setWeight(weight);
		input.ignore();
		input>>cost;
		regular.setCost(cost);
		input.ignore();
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		regular.setSender(name, address, city, state, zipCode);
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		
		regular.setReciever(name, address, city, state, zipCode);

		normal = &regular;

		
		normal->printInfo();

	}
	else if(type == 'O' || type == 'o'){
		OvernightPackage OverNight;
		//input.ignore();
		input>>weight;
		OverNight.setWeight(weight);
		input.ignore();
		input>>cost;
		OverNight.setCost(cost);
		input.ignore();
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		OverNight.setSender(name, address, city, state, zipCode);
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		input>>FlatRateIncrease;
		input.ignore();
		OverNight.setFlatRateIncrease(FlatRateIncrease);

		OverNight.setReciever(name, address, city, state, zipCode);

		normal = &OverNight;


		normal->printInfo();

	}

	else if(type== 'T' || type =='t'){
		TwoDayPackage TwoDay;
		//input.ignore();
		input>>weight;
		input.ignore();
		TwoDay.setWeight(weight);
		input>>cost;
		input.ignore();
		TwoDay.setCost(cost);
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		TwoDay.setSender(name, address, city, state, zipCode);
		getline(input, name);
		getline(input, address);
		getline(input, city);
		getline(input, state);
		getline(input, zipCode);
		input>>CostPerOunceIncrease;
		input.ignore();
		TwoDay.setCostPerOunceIncrease(CostPerOunceIncrease);

		TwoDay.setReciever(name, address, city, state, zipCode);

		normal = &TwoDay;


		normal->printInfo();

	}
	}
	char q;
	cin >> q;
	return 0;
}

