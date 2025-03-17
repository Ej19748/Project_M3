#ifndef Date_h
#define Date_h

#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
    int lastDay(int m, int y) const;
    bool isLeapYear(int y) const;
public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    bool isLeapYear() const; 
    int lastDay() const;
    string toString1() const;
    string toString2() const;
    string toString3() const;
};
#endif