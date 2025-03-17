#include <iostream>
#include "NumberArray.h"
using namespace std;

int main() {
   cout << "Test constructors" << endl;
  NumberArray defaultArr;
  cout << "From default constructor: Array of size " << defaultArr.getSize() << endl;
  defaultArr.printArray();
  cout << endl;

NumberArray paramArr(15);
  cout << "From constructor with parameters: Array of size " << paramArr.getSize() << endl;
  paramArr.printArray();
  cout << endl;

  cout << "Test mutator" << endl;
  cout << "Array filled with numbers:" << endl;
  double numbers [15] = {11.1, 55.0, 4.8, 47.8, 62.6, 11.9, 62.9, 88.5, 6.2, 3.5, 41.3, 91., 24.1, 73.5, 25.7};
  for (int i = 0; i < paramArr.getSize(); i++) {
    paramArr.setNumber(i, numbers[i]);
  }
  paramArr.printArray();
  cout << endl;
  cout << "Trying to set a number with an out of bounds index (20):" << endl;
  paramArr.setNumber(20, 100.0);
  cout << endl;
  cout << "Test accessors" << endl;
  cout << "Access item at index 5: " << paramArr.getNumber(5) << endl;
  cout << endl;
  cout << "Access item at index 20 (out of bounds): " << paramArr.getNumber(20) << endl;
  cout << endl;
  cout << "The minimum value in the array is: " << paramArr.getMin() << endl;
  cout << "The maximum value in the array is: " << paramArr.getMax() << endl;
  cout << "The average value in the array is: " << paramArr.getAverage() << endl;
  cout << endl;
  
  return 0;
}