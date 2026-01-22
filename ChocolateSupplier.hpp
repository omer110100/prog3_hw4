#pragma once

class ChocolateSupplier {
protected:
    char* chocolateName;

    static char* duplicate(const char* src);

public:
    explicit ChocolateSupplier(const char* name);
    ChocolateSupplier(const ChocolateSupplier& other);
    ChocolateSupplier& operator=(const ChocolateSupplier& other);
    virtual ~ChocolateSupplier();

    const char* getChocolateName() const;
    void supplyChocolate() const;
};
