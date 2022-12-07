#include "address.h"

Address::Address(std::string street, unsigned int number, std::string city, unsigned int zipCode)
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

std::ostream& operator<<(std::ostream& os, const Address& Address)
{
    os << Address._number << " " << Address._street << ", " << Address._zipCode << " " << Address._city;
    return os;
}





