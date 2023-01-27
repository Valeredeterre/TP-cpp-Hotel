#include <string>
#include <ostream>

class Address
{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Adresse class.
     *  \param street : the street of the address
     *  \param number : the number of the address
     *  \param city : the city of the address
     *  \param zipCode : the zip code of the address
     */
    Address(std::string street, unsigned int number, std::string city, unsigned int zipCode);
    //methods
    /*!
     *  \brief IO overload.
     *
     *  Show the adresse with std::cout.
     *
     */
    friend std::ostream& operator<<(std::ostream& os, const Address& Address);
private:
    //private variables
    std::string _street;
    unsigned int _number;
    std::string _city;
    unsigned int _zipCode;
};