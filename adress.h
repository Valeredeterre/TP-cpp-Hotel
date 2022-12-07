#include <string>
#include <ostream>

class Adress
{
public:
    Adress(std::string street, unsigned int number, std::string city, unsigned int zipCode);
    friend std::ostream& operator<<(std::ostream& os, const Adress& adress);
private:
    std::string _street;
    unsigned int _number;
    std::string _city;
    unsigned int _zipCode;
};