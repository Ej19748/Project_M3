
/*
* NumberArray.h
* This class implements an array of double values with various utility functions.
* The array size is specified at construction time or defaults to 10.
* The class provides functions to set/get values, find min/max/average, and print the array.
*/

#ifndef NumberArray_H
#define NumberArray_H

#include <iostream>
using namespace std;

class NumberArray{
  private:
  static const int DEFAULT_SIZE = 10;
  static const double DEFAULT_VALUE;

private:
  int size;
  double* arr;

public:
  // Constructor: Creates an array of specified size (or DEFAULT_SIZE if not specified)
  // Precondition: None
  // Postcondition: Creates a dynamically allocated array initialized with zeros
  NumberArray(int size = DEFAULT_SIZE);

  // Destructor: Frees dynamically allocated memory
  // Precondition: Object exists
  // Postcondition: Array memory is freed
  ~NumberArray();

  // Sets a value at specified index
  // Precondition: Valid index within array bounds
  // Postcondition: Value is stored at specified index if valid
  void setNumber(int index, double value);

  // Gets value at specified index
  // Precondition: Valid index within array bounds
  // Postcondition: Returns value at index or DEFAULT_VALUE if invalid
  double getNumber(int index) const;

  // Finds minimum value in array
  // Precondition: Array contains at least one element
  // Postcondition: Returns minimum value or DEFAULT_VALUE if empty
  double getMin() const;

  // Finds maximum value in array
  // Precondition: Array contains at least one element
  // Postcondition: Returns maximum value or DEFAULT_VALUE if empty
  double getMax() const;

  // Calculates average of all values
  // Precondition: Array contains at least one element
  // Postcondition: Returns average value or DEFAULT_VALUE if empty
  double getAverage() const;

  // Prints array contents
  // Precondition: None
  // Postcondition: Array elements are printed to console
  void printArray() const;

  // Returns size of array
  // Precondition: None
  // Postcondition: Returns current array size
  int getSize() const { return size; }
};
#endif
