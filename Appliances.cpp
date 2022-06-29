#include "Appliances.h"
#include <iostream>
#include <string>

using namespace std;

Appliances::Appliances(string name, int weight, string color, int price) : _name(name), _weight(weight), _color(color), _price(price) {}

/*void Appliances::ShowSpec()
{
	cout << "weight = " << _weight << endl;
	cout << "color = " << _color << endl;
}*/
