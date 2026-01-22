#pragma once
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"

class CandyMaker : public SugarSupplier, public ChocolateSupplier {
public:
    CandyMaker(const char* sugarName, const char* chocolateName);
    void makeCandy(const char* candyName) const;
};
