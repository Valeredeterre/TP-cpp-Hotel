#include "booking.h"

int main()
{
    Hotel hotel(Address("rue de la porte de bessey", 25 , "beze", 21310), "california", "1");
    hotel.addRoom(Room(120, 1, "suite", true));
    Date date(8, 12, 2022);
    Client client("john", "doe", "1");
    Booking booking(date, hotel, client, 2, 1);
    return 0;
}