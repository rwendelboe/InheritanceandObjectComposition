#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"


class OvernightPackage : public Package
{
	protected:
		double FlatRateIncrease;

	public:
		OvernightPackage();
		OvernightPackage(double theFlatRateIncrease);

		double getFlatRateIncrease();

		void setFlatRateIncrease(double flat);

		double calcOvernightPackage();

		virtual void printInfo();


};
#endif