#include "SmartWatch.h"
#include <iostream>
#include <string>

using namespace std;

SmartWatch::SmartWatch(double memorySize, int batteryLife, double wristSize, string watchbandColor, string watchbandMaterial, string name, int weight, string color, int price) : Device(memorySize, batteryLife), _wristSize(wristSize), _watchbandColor(watchbandColor), _watchbandMaterial(watchbandMaterial), Appliances(name, weight, color, price) {}

void SmartWatch::ShowSpec()
{
	cout << "name = " << _name << endl;
	cout << "memory size = " << _memorySize << " bytes" << endl;
	cout << "battery life = " << _batteryLife << " hours" << endl;
	cout << "wrist diameter = " << _wristSize << " inches" << std::endl;
	cout << "watchband color = " << _watchbandColor << endl;
	cout << "watchband material = " << _watchbandMaterial << endl;
	cout << "weight = " << _weight << " gramms" << endl;
	cout << "color = " << _color << endl;
	cout << "price = " << _price << " rubbles" << endl << endl;

}
