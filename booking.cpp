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
    }
    else
    {
        std::cout << "Room is not available or non valid date or non valid number of nights" << std::endl;
    }
}
