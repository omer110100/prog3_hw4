#pragma once
#include <iostream>

// התאמה ישירה ל-main.cpp
using Candy = const char*;

template <typename T>
class CandyBox {
private:
    T* items;
    int capacity;
    int count;

public:
    explicit CandyBox(int size)
        : items(new T[size]), capacity(size), count(0) {}

    ~CandyBox() {
        delete[] items;
    }

    bool addItem(const T& item) {
        if (count >= capacity)
            return false;
        items[count++] = item;
        return true;
    }

    bool removeItem(int index) {
        if (index < 0 || index >= count)
            return false;
        items[index] = items[count - 1];
        count--;
        return true;
    }

    void displayItems() const {
        for (int i = 0; i < count; ++i) {
            std::cout << items[i] << std::endl;
        }
    }
};
