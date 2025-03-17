
/*
 * Date Class Test Program
 * Purpose: Tests the Date class functionality including:
 * - Constructor validation
 * - Date format conversions
 * - Leap year handling
 * - Invalid date detection
 */

#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    // Test default constructor (should create 1/1/1900)
    cout << "Test default constructor: " << Date().toString1() << "/n" << endl;

    // Test constructor with valid date
    Date validDate(2, 28, 2009);
    cout << "Test construtor with valid date: " << validDate.toString1() << "/n" << endl;

    // Test invalid month handling
    Date invalidDate(45, 2, 2009);
    cout << "Test constructor with invalid month (45,2,2009): " << invalidDate.toString1() << "/n" << endl;

    // Test invalid day handling
    Date invalidDay(2,29,2009); 
    cout << "Test constructor with invalid day (2,29,2009): " << invalidDay.toString1() << "/n" << endl;

    // Test setDate method with various invalid inputs
    Date d;
    d.setDate(13, 1, 2009);
    cout << "Test setDate with invalid month (13): " << d.toString1() << "/n" << endl;

    d.setDate(2, 29, 2009);
    cout << "Test for leap year with invalid day (2,29,2009): " << d.toString1() << "/n" << endl;

    d.setDate(4, 31, 2009);
    cout << "Test for invalid day (31): " << d.toString1() << "/n" << endl;

    // Test leap year handling
    Date leapDate(2, 29, 2008); 
    cout << "Test for leap year with valid date (2,29,2008): " << leapDate.toString1() << "/n" << endl;

    // Test different date format outputs
    cout << "Test the print formats: " << endl;
    cout << leapDate.toString2() << endl;
    cout << leapDate.toString3() << "/n" << endl;

    return 0;
}
