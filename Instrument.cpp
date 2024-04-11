//
// CopyRight 2024
//
#include "Instrument.h"
#include "StringInstrument.h"

void Instrument::SetName(std::string userName) {
      instrumentName = userName;
}

std::string Instrument::GetName() {
    return instrumentName;
}

void Instrument::SetManufacturer(std::string userManufacturer) {
    instrumentManufacturer = userManufacturer;
}

std::string Instrument::GetManufacturer() {
    return instrumentManufacturer;
}

void Instrument::SetYearBuilt(int userYearBuilt) {
    yearBuilt = userYearBuilt;
}

int Instrument::GetYearBuilt() {
    return yearBuilt;
}

void Instrument::SetCost(int userCost) {
    cost = userCost;
}

int Instrument::GetCost() {
    return cost;
}

void Instrument::PrintInfo() {
    std::cout << "Instrument Information: " << std::endl;
    std::cout << "   Name: " << instrumentName << std::endl;
    std::cout << "   Manufacturer: " << instrumentManufacturer << std::endl;
    std::cout << "   Year built: " << yearBuilt << std::endl;
    std::cout << "   Cost: " << cost << std::endl;
}

