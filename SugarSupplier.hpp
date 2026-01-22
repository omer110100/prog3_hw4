#pragma once

class SugarSupplier {
protected:
    char* sugarName;

    static char* duplicate(const char* src);

public:
    explicit SugarSupplier(const char* name);
    SugarSupplier(const SugarSupplier& other);
    SugarSupplier& operator=(const SugarSupplier& other);
    virtual ~SugarSupplier();

    const char* getSugarName() const;
    void supplySugar() const;
};
