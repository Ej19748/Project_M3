#include "NumberArray.h"
#include <iostream>
#include <iomanip>

using namespace std;

const double NumberArray::DEFAULT_VALUE = 10000.0;
NumberArray::NumberArray(int s) : size(s) {
    if (size <= 0) {
        size = DEFAULT_SIZE;
    }
    arr = new double[size];
    for (int i = 0; i < size; i++) {
        arr[i] = 0.0;
    }
}

NumberArray::~NumberArray() {
    delete [] arr;
    cout << "The deconstructor is running" << endl;
}
void NumberArray::setNumber(int index, double value) {
    if (index < 0 || index >= size) {
        cout << "The index is out of bounds of the array, number not stored" << endl;
        return;
    }
    arr[index] = value;
}
