#include <string>
#include <ostream>

class Address
{
public:
    Address(std::string street, unsigned int number, std::string city, unsigned int zipCode);
    friend std::ostream& operator<<(std::ostream& os, const Address& Address);
private:
    std::string _street;
    unsigned int _number;
    std::string _city;
    unsigned int _zipCode;
};