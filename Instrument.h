//
// CopyRight 2024
//

#ifndef INC_10_14_INSTRUMENT_H
#define INC_10_14_INSTRUMENT_H

#include <iostream>
#include <iomanip>
#include <string>



class Instrument {
protected:
    std::string instrumentName;
    std::string instrumentManufacturer;
    int yearBuilt;
    int cost;

public:
    void SetName(std::string userName);

    std::string GetName();

    void SetManufacturer(std::string userManufacturer);

    std::string GetManufacturer();

    void SetYearBuilt(int userYearBuilt);

    int GetYearBuilt();

    void SetCost(int userCost);

    int GetCost();

    void PrintInfo();
};

#endif //INC_10_14_INSTRUMENT_H
