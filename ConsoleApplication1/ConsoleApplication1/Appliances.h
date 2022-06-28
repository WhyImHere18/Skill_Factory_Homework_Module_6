#pragma once
#include "IElectronics.h"
#include <string>

using namespace std;

class Appliances : virtual public IElectronics
{
public:
    Appliances(string name, int weight, string color, int price);
    virtual ~Appliances() = default;
    //void ShowSpec() override;
protected:
    string _name;
    int _weight;
    string _color;
    int _price;
};

