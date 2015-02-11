#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"


class TwoDayPackage : public Package
{
	protected:
		double CostPerOunceIncrease;

	public:
		TwoDayPackage();
		TwoDayPackage(double theCostPerOunceIncrease);

		double getCostPerOunceIncrease();

		void setCostPerOunceIncrease(double increase);

		double calcCostPerOunceIncrease();

		virtual void printInfo();

};
#endif