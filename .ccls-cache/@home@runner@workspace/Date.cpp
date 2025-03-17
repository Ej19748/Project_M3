
#include "Date.h"
#include <iostream>
#include <sstream>

using namespace std;

// Helper function to convert month number to name
// Precondition: m (1-12)
// Postcondition: returns month name or empty string if invalid
static string getMonthName(int m) {
    switch (m){
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "";
    }
}

// Implementation of remaining methods with existing logic
int Date::lastDay(int m, int y) const {
    if (m == 2)
      return isLeapYear(y) ? 29 : 28;
    else if(m == 4 || m == 6 || m == 9 || m == 11)
      return 30;
    else
      return 31;
}

bool Date::isLeapYear(int y) const {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y) {
    if (m < 1 || m > 12) {
        cout << "Invalid month" << endl;
        month = 1; day = 1; year = 1900;
        return;
    }
    int maxDay = lastDay(m, y);
    if (d < 1 || d > maxDay) {
        cout << "Invalid day" << endl;
        month = 1; day = 1; year = 1900;
        return;
    }
    if(y < 1) {
        cout << "Invalid year" << endl;
        month = 1; day = 1; year = 1900;
        return;
    }
    month = m; day = d; year = y;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

int Date::lastDay() const {
    return lastDay(month, year);
}

string Date::toString1() const {
    ostringstream oss;
    oss << getMonth() << "/" << getDay() << "/" << getYear();
    return oss.str();
}

string Date::toString2() const {
    ostringstream oss;
    oss << getMonthName(month) << " " << getDay() << ", " << getYear();
    return oss.str();
}

string Date::toString3() const {
    ostringstream oss;
    oss << getDay() << " " << getMonthName(month) << " " << getYear();
    return oss.str();
}
