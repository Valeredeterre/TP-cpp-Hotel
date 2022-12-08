#include "hotel.h"

Hotel::Hotel(Address address, std::string name, std::string id)
: _address(address), _name(name), _id(id)
{
}

std::ostream& operator<<(std::ostream& os, const Hotel& hotel)
{
    os << hotel._name << " " << hotel._address << std::endl;
    std::cout << "Avaiable Rooms:" << std::endl;
    for (auto room : hotel._rooms)
    {
        if (room.getIsAvailable())
        {
            std::cout << room << std::endl;
        }
    }
    std::cout << "Booked Rooms:" << std::endl;
    for (auto room : hotel._rooms)
    {
        if (!room.getIsAvailable())
        {
            std::cout << room << std::endl;
        }
    }
    return os;
}

Room Hotel::getRoom(unsigned int roomNumber) 
{
    for (auto room : _rooms)
    {
        if (roomNumber == room.getNumber())
        {
            return room;
        }
    }
    std::cout << "Room "<<  roomNumber << " does not exist" << std::endl;
    return Room();
}

void Hotel::setRoom(unsigned int roomNumber, Room room)
{
    _rooms.at(roomNumber-1) = room;
}

bool Hotel::addRoom(Room& room)
{
    for (auto it = _rooms.begin(); it != _rooms.end(); it++)
    {
        if (room.getNumber() == it->getNumber())
        {
            std::cout << "Room "<<room.getNumber()<< " already exists" << std::endl;
            return false;
        }
    }
    _rooms.push_back(room);
    return true;
}

bool Hotel::removeRoom(unsigned int roomNumber)
{
    for (auto it = _rooms.begin(); it != _rooms.end(); it++)
    {
        if (roomNumber == it->getNumber())
        {
            _rooms.erase(it);
            return true;
        }
    }
    std::cout << "Room "<<roomNumber<< " does not exist" << std::endl;
    return false;
}

void Hotel::displayRooms() const
{
    for (auto room : _rooms)
        std::cout << room << std::endl;
}

std::string Hotel::getId() const
{
    return _id;
}

void Hotel::setRoomPrice(unsigned int roomNumber, float price)
{
    for (auto it = _rooms.begin(); it < _rooms.end(); it++)
    {
        if (roomNumber == it->getNumber())
        {
            it->setPrice(price);
            return;
        }
    }
    std::cout << "Room "<<roomNumber<< " does not exist" << std::endl;
}

