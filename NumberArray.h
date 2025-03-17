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
  NumberArray(int size = DEFAULT_SIZE);
  ~NumberArray();
  void setNumber(int index, double value);
  double getNumber(int index) const;
  double geMin() const;
  double getMax() const;
  double getAverage() const;
  void printArray() const;
  int getSize() const { return size; }
};
#endif