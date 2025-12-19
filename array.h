#ifndef ARRAY_H
#define ARRAY_H

#include "number.h"
#include <iostream>

class Array {
private:
    number* data;
    int size;

    void swap(number& a, number& b);

public:
    Array();
    Array(int n, number value = 0);
    ~Array();
    Array(const Array& other);
    Array& operator=(const Array& other);

    int getSize() const;
    number& operator[](int index);
    const number& operator[](int index) const;

    void resize(int newSize, number value = 0);

    friend std::istream& operator>>(std::istream& is, Array& arr);
    friend std::ostream& operator<<(std::ostream& os, const Array& arr);

    number mean() const;
    number standardDeviation() const;
    void sortAscending();
    void sortDescending();
};

#endif // ARRAY_H