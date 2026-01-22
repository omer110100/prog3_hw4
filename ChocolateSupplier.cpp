#include "ChocolateSupplier.hpp"
#include <cstring>
#include <iostream>

char* ChocolateSupplier::duplicate(const char* src) {
    if (!src) {
        char* empty = new char[1];
        empty[0] = '\0';
        return empty;
    }
    char* copy = new char[strlen(src) + 1];
    strcpy(copy, src);
    return copy;
}

ChocolateSupplier::ChocolateSupplier(const char* name)
    : chocolateName(duplicate(name)) {}

ChocolateSupplier::ChocolateSupplier(const ChocolateSupplier& other)
    : chocolateName(duplicate(other.chocolateName)) {}

ChocolateSupplier& ChocolateSupplier::operator=(const ChocolateSupplier& other) {
    if (this != &other) {
        delete[] chocolateName;
        chocolateName = duplicate(other.chocolateName);
    }
    return *this;
}

ChocolateSupplier::~ChocolateSupplier() {
    delete[] chocolateName;
}

const char* ChocolateSupplier::getChocolateName() const {
    return chocolateName;
}

void ChocolateSupplier::supplyChocolate() const {
    std::cout << "Supplying chocolate from " << chocolateName << std::endl;
}
