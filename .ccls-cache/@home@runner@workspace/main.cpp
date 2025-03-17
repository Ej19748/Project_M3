#include <iostream>
#include "Date.h"

using namespace std;
int main() {
    cout << "Test default constructor: " << Date().toString1() << "/n" << endl;
    Date validDate(2, 28, 2009);
  cout << "Test construtor with valid date: " << validDate.toString1() << "/n" << endl;
  Date invalidDate(45, 2, 2009);
  cout << "Test constructor with invalid month (45,2,2009): " << invalidDate.toString1() << "/n" << endl;
  Date invalidDay(2,29,2009); 
  cout << "Test constructor with invalid day (2,29,2009): " << invalidDay.toString1() << "/n" << endl;
  Date d;
  d.setDate(13, 1, 2009);
  cout << "Test setDate with invalid month (13): " << d.toString1() << "/n" << endl;
  d.setDate(2, 29, 2009);
  cout << "Test for leap year with invalid day (2,29,2009): " << d.toString1() << "/n" << endl;
  d.setDate(4, 31, 2009);
  cout << "Test for invalid day (31): " << d.toString1() << "/n" << endl;
  Date leapDate(2, 29, 2008); 
  cout << "Test for leap year with valid date (2,29,2008): " << leapDate.toString1() << "/n" << endl;
  cout << "Test the print formats: " << endl;
  cout << leapDate.toString2() << endl;
  cout << leapDate.toString3() << "/n" << endl;

  return 0;
}