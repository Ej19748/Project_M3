
/*
 * Date Class
 * Purpose: Handles date operations and various date format representations
 * Input: Month (1-12), Day (1-31), Year (>0)
 * Operations: Date validation, leap year checking, and different string representations
 */

#ifndef Date_h
#define Date_h

#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    
    // Returns the last day of given month and year
    // Precondition: m (1-12), y > 0
    // Postcondition: returns last day (28-31) based on month and leap year
    int lastDay(int m, int y) const;
    
    // Checks if given year is a leap year
    // Precondition: y > 0
    // Postcondition: returns true if leap year, false otherwise
    bool isLeapYear(int y) const;

public:
    // Constructor: initializes date (defaults: 1/1/1900)
    // Precondition: m (1-12), d (1-31), y > 0
    // Postcondition: creates valid date or defaults if invalid
    Date(int m = 1, int d = 1, int y = 1900);
    
    // Sets the date values
    // Precondition: m (1-12), d (1-31), y > 0
    // Postcondition: updates date if valid, sets to default if invalid
    void setDate(int m, int d, int y);
    
    // Accessor methods
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    
    // Checks if current year is leap year
    bool isLeapYear() const;
    
    // Gets last day of current month
    int lastDay() const;
    
    // Returns date as "MM/DD/YYYY"
    string toString1() const;
    
    // Returns date as "Month DD, YYYY"
    string toString2() const;
    
    // Returns date as "DD Month YYYY"
    string toString3() const;
};
#endif
