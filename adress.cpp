#include "adress.h"

Adress::Adress(std::string street, unsigned int number, std::string city, unsigned int zipCode)
{
    _street = street;
    if(number > 0)
        _number = number;
    else _number = 1;
    _city = city;
    if(zipCode > 9999 || zipCode < 1000)
        _zipCode = zipCode;
    else _zipCode = 1000;
}

std::ostream& operator<<(std::ostream& os, const Adress& adress)
{
    os << adress._number << " " << adress._street << ", " << adress._zipCode << " " << adress._city;
    return os;
}

