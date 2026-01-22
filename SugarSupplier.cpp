#include "SugarSupplier.hpp"
#include <cstring>
#include <iostream>

char* SugarSupplier::duplicate(const char* src) {
    if (!src) {
        char* empty = new char[1];
        empty[0] = '\0';
        return empty;
    }
    char* copy = new char[strlen(src) + 1];
    strcpy(copy, src);
    return copy;
}

SugarSupplier::SugarSupplier(const char* name)
    : sugarName(duplicate(name)) {}

SugarSupplier::SugarSupplier(const SugarSupplier& other)
    : sugarName(duplicate(other.sugarName)) {}

SugarSupplier& SugarSupplier::operator=(const SugarSupplier& other) {
    if (this != &other) {
        delete[] sugarName;
        sugarName = duplicate(other.sugarName);
    }
    return *this;
}

SugarSupplier::~SugarSupplier() {
    delete[] sugarName;
}

const char* SugarSupplier::getSugarName() const {
    return sugarName;
}

void SugarSupplier::supplySugar() const {
    std::cout << "Supplying sugar from " << sugarName << std::endl;
}
