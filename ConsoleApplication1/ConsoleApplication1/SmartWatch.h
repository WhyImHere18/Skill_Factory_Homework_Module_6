#pragma once
#include "Device.h"
#include "Appliances.h"

using namespace std;

class SmartWatch : virtual public Device, Appliances
{
public:
	SmartWatch(double memorySize, int batteryLife, double wristSize, string watchbandColor, string watchbandMaterial, string name, int weight, string color, int price);
	void ShowSpec() override;
	virtual ~SmartWatch() = default;
private:
	double _wristSize;
	string _watchbandColor;
	string _watchbandMaterial;
};

