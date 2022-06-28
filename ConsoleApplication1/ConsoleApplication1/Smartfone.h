#pragma once
#include "Device.h"
#include "Appliances.h"
#include <string>

using namespace std;

class Smartfone : public Device, Appliances
{
public:
    Smartfone(double memorySize, int batteryLife, double screenSize,  double cameraResolution, string name, int weight, std::string color, int price);
    virtual ~Smartfone() = default;
    void ShowSpec() override;
protected:
    double _screenSize;
    double _cameraResolution;
};