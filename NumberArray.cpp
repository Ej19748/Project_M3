/*
* NumberArray.cpp
* Implementation of the NumberArray class that manages a dynamic array of doubles.
* The class provides array operations with bounds checking and error handling.
* All out-of-bounds operations return a DEFAULT_VALUE of 10000.0.
*/

#include "NumberArray.h"
#include <iomanip>
#include <iostream>

using namespace std;

// Default value returned for error conditions
const double NumberArray::DEFAULT_VALUE = 10000.0;
// Constructor implementation
// Creates and initializes array with zeros
// If size is invalid (<=0), uses DEFAULT_SIZE
NumberArray::NumberArray(int s) : size(s) {
  if (size <= 0) {
    size = DEFAULT_SIZE;
  }
  arr = new double[size];
  for (int i = 0; i < size; i++) {
    arr[i] = 0.0;
  }
}

// Destructor implementation
// Frees dynamically allocated array memory
NumberArray::~NumberArray() {
  delete[] arr;
  cout << "The deconstructor is running" << endl;
}
// Sets a value at the specified index
// Returns without action if index is invalid
void NumberArray::setNumber(int index, double value) {
  if (index < 0 || index >= size) {
    cout << "The index is out of bounds of the array, number not stored"
         << endl;
    return;
  }
  arr[index] = value;
}

// Retrieves value at specified index
// Returns DEFAULT_VALUE if index is invalid
double NumberArray::getNumber(int index) const {
  if (index < 0 || index >= size) {
    cout << "The index is out of bounds of the array, returning default"
         << endl;
    return DEFAULT_VALUE;
  }
  return arr[index];
}
// Finds minimum value in array
// Returns DEFAULT_VALUE if array is empty
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
// Finds maximum value in array
// Returns DEFAULT_VALUE if array is empty
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
// Prints all array elements with 1 decimal place precision
void NumberArray::printArray() const {
  for (int i = 0; i < size; i++) {
    cout << fixed << setprecision(1) << arr[i] << " ";
  }
  cout << endl;
}
// Calculates average of all array elements
// Returns DEFAULT_VALUE if array is empty
double NumberArray::getAverage() const {
  if (size <= 0)
    return DEFAULT_VALUE;
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}
