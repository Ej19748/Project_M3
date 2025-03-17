#include "NumberArray.h"
#include <iomanip>
#include <iostream>

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
  delete[] arr;
  cout << "The deconstructor is running" << endl;
}
void NumberArray::setNumber(int index, double value) {
  if (index < 0 || index >= size) {
    cout << "The index is out of bounds of the array, number not stored"
         << endl;
    return;
  }
  arr[index] = value;
}

double NumberArray::getNumber(int index) const {
  if (index < 0 || index >= size) {
    cout << "The index is out of bounds of the array, returning default"
         << endl;
    return DEFAULT_VALUE;
  }
  return arr[index];
}
double NumberArray::getMin() const {
  if (size <= 0)
    return DEFAULT_VALUE;
  double minVal = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < minVal) {
      minVal = arr[i];
    }
  }
  return minVal;
}
double NumberArray::getMax() const {
  if (size <= 0)
    return DEFAULT_VALUE;
  double maxVal = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > maxVal) {
      maxVal = arr[i];
    }
  }
  return maxVal;
}
void NumberArray::printArray() const {
  if (int i = 0; i < size; i++) {
    cout << fixed << setprecision(1) << arr[i] << " ";
  }
  cout << endl;
}