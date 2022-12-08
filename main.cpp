#include "function.h"

int main()
{
    std::array<Client, 5> clients = 
    {
        Client("Dupont", "Jean", "1"),
        Client("Durand", "Pierre", "2"),
        Client("Martin", "Paul", "3"),
        Client("Bernard", "Jacques", "4"),
        Client("Thomas", "Robert", "5")
    };


    Hotel hotel(Address("rue de la porte de bessey", 25 , "beze", 21310), "california", "1");
    fillHotelWithRooms(hotel);
    std::cout << hotel;
    return 0;
}