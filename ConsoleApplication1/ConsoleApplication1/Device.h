#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
    Device(double memorySize, int batteryLife);
    virtual ~Device() = default;
    //virtual void ShowSpec() override;
protected:
    double _memorySize;
    int _batteryLife;
};

