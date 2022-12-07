#include "date.h"

Date::Date(int day, int month, int year)
{
    if(dateIsValid(day, month, year))
    {
        _year = year;
        _month = month;
        _day = day;
    }
    else
    {
        time_t t = time(0);
        struct tm * now = localtime( & t );
        _year = now->tm_year + 1900;
        _month = now->tm_mon + 1;
        _day = now->tm_mday;
    }
}

Date::Date()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );
    _year = now->tm_year + 1900;
    _month = now->tm_mon + 1;
    _day = now->tm_mday;
}

int Date::GetYear() const
{
    return _year;
}

int Date::GetMonth() const
{
    return _month;
}

int Date::GetDay() const
{
    return _day;
}

bool Date::dateIsValid(int d, int m, int y)
{
    if(y < 0 || m < 0 || d < 0)
    {
        return false;
    }
    if(m > 12)
    {
        return false;
    }
    if(d > 31)
    {
        return false;
    }
    if(m == 2 && d > 29)
    {
        return false;
    }
    if(m == 4 && d > 30)
    {
        return false;
    }
    if(m == 6 && d > 30)
    {
        return false;
    }
    if(m == 9 && d > 30)
    {
        return false;
    }
    if(m == 11 && d > 30)
    {
        return false;
    }
    if(m == 2 && d == 29 && y % 4 != 0)
    {
        return false;
    }
    return true;
}

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    os << date.GetDay() << "-" << date.GetMonth() << "-" << date.GetYear();
    return os;
}

