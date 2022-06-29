#pragma once
#include "Device.h"
#include "Appliances.h"
#include <string>

using namespace std;

class Player : public Device, Appliances
{
public:
    Player(double memorySize, int batteryLife, int totalTracks, string name, int weight, string color, int price);
    virtual ~Player() = default;
    void ShowSpec() override;
private:
    int _totalTracks;
};

