#include "booking.h"

Booking::Booking(Date checkInDate, Hotel& hotel, Client& client, unsigned int roomNumber, unsigned int numberOfNights)
:_hotel(hotel), _client(client)
{
    if(hotel.getRoom(roomNumber).getIsAvailable() && checkInDate > Date() && numberOfNights > 0)
    {
        _checkInDate = checkInDate;
        _roomNumber = roomNumber;
        _numberOfNights = numberOfNights;
        hotel.getRoom(roomNumber).setIsAvailable(false);
        _totalCost = totalCost();
    }
    else
    {
        std::cout << "Room is not available or non valid date or non valid number of nights" << std::endl;
    }
}

void Booking::setCheckInDate(Date checkInDate)
{
    if(_hotel.getRoom(_roomNumber).getIsAvailable() && checkInDate > Date())
    {
        _checkInDate = checkInDate;
    }
    else
    {
        std::cout << "Room is not available or non valid date" << std::endl;
    }
}

void Booking::setNumberOfNights(unsigned int numberOfNights)
{
    if(numberOfNights > 0)
    {
        _numberOfNights = numberOfNights;
        _totalCost = totalCost();
    }
    else
    {
        std::cout << "Non valid number of nights" << std::endl;
    }
}

float Booking::totalCost()
{
    return _hotel.getRoom(_roomNumber).getPrice() * _numberOfNights;
}

std::ostream& operator<<(std::ostream& os, const Booking& booking)
{
    os << "Check in date: " << booking._checkInDate << ", hotel: " << booking._hotel << ", client: " << booking._client << ", room number: " << booking._roomNumber << ", number of nights: " << booking._numberOfNights << ", total cost: " << booking._totalCost;
    return os;
}
