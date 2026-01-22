#include "CandyMaker.hpp"
#include <iostream>

CandyMaker::CandyMaker(const char* sugarName, const char* chocolateName)
    : SugarSupplier(sugarName), ChocolateSupplier(chocolateName) {}

void CandyMaker::makeCandy(const char* candyName) const {
    std::cout << "Making candy '" << candyName
              << "' using sugar from " << getSugarName()
              << " and chocolate from " << getChocolateName()
              << std::endl;
}
