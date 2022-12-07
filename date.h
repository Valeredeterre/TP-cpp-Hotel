#include <iostream>
#include <string>
#include <time.h>

class Date{
public:
    Date(int day, int month, int year);
    Date();
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
    friend std::ostream& operator<<(std::ostream& os, const Date& date);

private:
    bool dateIsValid(int day, int month, int year);
    int _year;
    int _month;
    int _day;
};