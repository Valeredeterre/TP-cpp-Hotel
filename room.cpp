#include "room.h"

Room::Room(float price, unsigned int number, std::string type, bool isAvailable)
{
    _price = price;
    _number = number;
    _type = type;
    _isAvailable = isAvailable;
}

float Room::getPrice() const
{
    return _price;
}

unsigned int Room::getNumber() const
{
    return _number;
}

bool Room::getIsAvailable() const
{
    return _isAvailable;
}

void Room::setIsAvailable(bool isAvailable)
{
    _isAvailable = isAvailable;
}

std::string Room::getType() const
{
    return _type;
}

void Room::setPrice(float price)
{
    if(price > 0)
        _price = price;
}

std::ostream& operator<<(std::ostream& os, const Room& room)
{
    os << "Room number: " << room._number << ", type: " << room._type << ", price: " << room._price << ", is available: " << room._isAvailable;
    return os;
}

