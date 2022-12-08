#include "booking.h"

void fillHotelWithRooms(Hotel& hotel)
{
    Room room1(100, 1, "single", true);
    Room room2(100, 2, "single", true);
    Room room3(100, 3, "single", true);
    Room room4(125, 4, "double", true);
    Room room5(125, 5, "double", true);
    Room room6(125, 6, "double", true);
    Room room7(125, 7, "double", true);
    Room room8(125, 8, "double", true);
    Room room9(210, 9, "suite", true);
    Room room10(210, 10, "suite", true);
    
    hotel.addRoom(room1);
    hotel.addRoom(room2);
    hotel.addRoom(room3);
    hotel.addRoom(room4);
    hotel.addRoom(room5);
    hotel.addRoom(room6);
    hotel.addRoom(room7);
    hotel.addRoom(room8);
    hotel.addRoom(room9);
    hotel.addRoom(room10);
} 