#include <iostream>
#include <string>
#include <time.h>
#include <array>

class Date{
public:
    Date(int day, int month, int year);
    Date();
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    bool operator>(const Date& date) const;
    bool operator ==(const Date& date) const;

private:
    bool dateIsValid(int day, int month, int year);
    int _year;
    int _month;
    int _day;
};