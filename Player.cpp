#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(double memorySize, int batteryLife, int totalTracks, string name, int weight, string color, int price) : Device(memorySize, batteryLife), _totalTracks(totalTracks), Appliances(name, weight, color, price) {}

void Player::ShowSpec()
{
	cout << "name = " << _name << endl;
	cout << "memory size = " << _memorySize << " bytes" << endl;
	cout << "battery life = " << _batteryLife << " hours" << endl;
	cout << "total tracks number = " << _totalTracks << " tracks" << endl;
	cout << "weight = " << _weight << " gramms" << endl;
	cout << "color = " << _color << endl;
	cout << "price = " << _price << " rubbles" << endl << endl;
}


