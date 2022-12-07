#include "client.h"
#include "hotel.h"
#include "date.h"

class Booking
{
public:
    Booking(Date checkInDate, Hotel& hotel, Client& client, unsigned int roomNumber, unsigned int numberOfNights);
private:
    Date _checkInDate;
    Hotel _hotel;
    Client _client;
    unsigned int _roomNumber;
    unsigned int _numberOfNights;

};