#include "function.h"

int main()
{
    std::vector<Client> clients = 
    {
        Client("Dupont", "Jean", "1"),
        Client("Durand", "Pierre", "2"),
        Client("Martin", "Paul", "3"),
        Client("Bernard", "Jacques", "4"),
        Client("Thomas", "Robert", "5")
    };

    Hotel hotel(Address("rue de la porte de bessey", 25 , "beze", 21310), "california", "1");
    fillHotelWithRooms(hotel);

    std::vector<Booking> bookings = 
    {
        Booking(Date(), hotel, clients[0], 1, 2),
    };

    
    std::cout << hotel;
    std::cout << std::endl << "Clients: " << std::endl;
    for (auto client : clients)
    {
        std::cout << client << std::endl;
    }

    displayBookingInfo(bookings, Date(), 1, clients, hotel);

    return 0;
}