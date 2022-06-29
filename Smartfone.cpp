#include "Smartfone.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Smartfone::Smartfone(double memorySize, int batteryLife, double screenSize, double cameraResolution, string name, int weight, string color, int price) : Device(memorySize, batteryLife), _screenSize(screenSize), _cameraResolution(cameraResolution), Appliances(name, weight, color, price) {}

void Smartfone::ShowSpec()
{
	cout << "name = " << _name << endl;
	cout << "memory size = " << _memorySize << " bytes" << endl;
	cout << "battery life = " << _batteryLife << " hours" << endl;
	cout << "screen size = " << _screenSize << " inches" << std::endl;
	cout << "camera resolution = " << _cameraResolution << " pixels" << endl;
	cout << "weight = " << _weight << " gramms" << endl;
	cout << "color = " << _color << endl;
	cout << "price = " << _price << " rubbles" << endl << endl;

}
