#include "room.h"

Room::Room(float price, int number, std::string type, bool isAvailable)
{
    _price = price;
    _number = number;
    _type = type;
    _isAvailable = isAvailable;
}

float Room::GetPrice() const
{
    return _price;
}

int Room::GetNumber() const
{
    return _number;
}

bool Room::getIsAvailable() const
{
    return _isAvailable;
}

void Room::SetIsAvailable(bool isAvailable)
{
    _isAvailable = isAvailable;
}

std::string Room::GetType() const
{
    return _type;
}

void Room::SetPrice(float price)
{
    _price = price;
}

std::ostream& operator<<(std::ostream& os, const Room& room)
{
    os << "Room number: " << room._number << ", type: " << room._type << ", price: " << room._price << ", is available: " << room._isAvailable;
    return os;
}

