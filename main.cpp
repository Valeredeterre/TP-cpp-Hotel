#include "booking.h"

int main()
{
    Hotel hotel(Address("rue de la porte de bessey", 25 , "beze", 21310), "california", "1");
    Room room(120, 1, "suite", true);
    hotel.addRoom(room);
    Date date(8, 12, 2022);
    Client client("john", "doe", "1");
    hotel.getRoom(1).setPrice(1000);
    Booking booking(date, hotel, client, 1, 1);
    booking.setNumberOfNights(35);
    std::cout << hotel.getRoom(1).getPrice()<< "\n"; 
    std::cout << &room << std::endl;
    Room room2 = hotel.getRoom(1);
    std::cout << &room2 << std::endl;
    return 0;
}