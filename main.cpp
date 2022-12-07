#include "booking.h"

int main()
{
    Hotel hotel(Address("rue de la porte de bessey", 25 , "beze", 21310), "california", "1");
    Room room(120, 1, "suite", true);
    hotel.addRoom(room);
    Date date(8, 12, 2022);
    Client client("john", "doe", "1");
    Booking booking(date, hotel, client, 1, 1);
    hotel.setRoomPrice(1, 1000);
    booking.setNumberOfNights(35);
    std::cout << hotel.getRoom(1).getPrice()<< "\n"; 

    /*std::cout << &room << std::endl;
    Room* a = &room;
    std::cout << a << std::endl;*/
    return 0;
}