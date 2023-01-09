#include "function.h"


bool dateIsValid(unsigned int d,unsigned int m,unsigned int y)
{
    if(y < 0 || m < 0 || d < 0)
    {
        return false;
    }
    if(m > 12 ||d > 31)
    {
        return false;
    }
    if(m == 2 && d > 29)
    {
        return false;
    }
    if( (m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
    {
        return false;
    }
    if(m == 2 && d == 29 && y % 4 != 0)
    {
        return false;
    }
    return true;
}

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


Client displayClientInfo(std::vector<Client>& clients, std::string name)
{
    for (auto client : clients)
    {
        if (client.GetName() == name)
        {
            std::cout << client << std::endl;
            return client;
        }
    }
    std::cout << "Client not found" << std::endl;
    return createANewClient(clients, name);
}

Client createANewClient(std::vector<Client>& clients, std::string name)
{
    std::string firstName;
    std::string id;
    std::cout << "Enter the first name of the client: ";
    std::cin >> firstName;
    std::cout << "Enter the id of the client: ";
    std::cin >> id;
    Client client(name, firstName, id);
    clients.push_back(client);
    return client;
}

void displayBookingInfo(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel)
{
    for (auto booking : bookings)
    {
        if (booking.getCheckInDate() == checkInDate && booking.getRoomNumber() == roomNumber)
        {
            std::cout << booking << std::endl;
            return;
        }
    }
    std::cout << "Booking not found" << std::endl;
    createANewBooking(bookings, checkInDate, roomNumber, clients, hotel);
}

void createANewBooking(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel)
{
    unsigned int day = 0, month = 0, year = 0;
    do
    {
        std::cout << "Enter the check in date: " << std::endl;
        std::cout << "Day: ";
        std::cin >> day;
        std::cout << "Month: ";
        std::cin >> month;
        std::cout << "Year: ";
        std::cin >> year;

    }while(!dateIsValid(day, month, year));
    checkInDate = Date(day, month, year);


    std::string name;
    std::cout << "Enter the name of the client: ";
    std::cin >> name;
    Client client = displayClientInfo(clients, name);

    Room room = hotel.getRoom(roomNumber);

    unsigned int numberOfNights = 0;
    do
    {
        std::cout << "Enter the number of nights: ";
        std::cin >> numberOfNights;
    }while(numberOfNights <= 1);

    roomNumber = 0;
    do
    {
        std::cout << "Enter the room number: ";
        std::cin >> roomNumber;
    } while (roomNumber <= 0 || roomNumber > hotel.getNumberOfRooms());
    

    Booking booking(checkInDate, hotel, client, roomNumber, numberOfNights);
    bookings.push_back(booking);
}

void displayAllBookings(std::vector<Booking>& bookings)
{
    for (auto booking : bookings)
    {
        std::cout << booking << std::endl;
    }
}

unsigned int findFirstFreeBookingId(std::vector<Booking>& bookings)
{
    unsigned int id = 0;
    for (auto booking : bookings)
    {
        if (booking.getId() == id)
        {
            id++;
        }
    }
    return id;
}

void displayBookingWithId(std::vector<Booking>& bookings, unsigned int id)
{
    for (auto booking : bookings)
    {
        if (booking.getId() == id)
        {
            std::cout << booking << std::endl;
            return;
        }
    }
    std::cout << "Booking not found" << std::endl;
}

void displayAllBookingsForAClient(std::vector<Booking>& bookings, std::string name)
{
    for (auto booking : bookings)
    {
        if (booking.getClient().GetName() == name)
        {
            std::cout << booking << std::endl;
        }
    }
}

void modifyBooking(std::vector<Booking>& bookings, unsigned int id)
{
    for (auto booking : bookings)
    {
        if (booking.getId() == id)
        {
            unsigned int day = 0, month = 0, year = 0;
            do
            {
                std::cout << "Enter the check in date: " << std::endl;
                std::cout << "Day: ";
                std::cin >> day;
                std::cout << "Month: ";
                std::cin >> month;
                std::cout << "Year: ";
                std::cin >> year;

            } while (!dateIsValid(day, month, year));
            booking.setCheckInDate(Date(day, month, year));

            unsigned int numberOfNights = 0;
            do
            {
                std::cout << "Enter the number of nights: ";
                std::cin >> numberOfNights;
            } while (numberOfNights <= 1);
            booking.setNumberOfNights(numberOfNights);

            unsigned int roomNumber = 0;
            do
            {
                std::cout << "Enter the room number: ";
                std::cin >> roomNumber;
            } while (roomNumber <= 0 || roomNumber > booking.getHotel().getNumberOfRooms());
            booking.setRoomNumber(roomNumber);
            return;
        }
    }
    std::cout << "Booking not found" << std::endl;
}

void deleteBooking(std::vector<Booking>& bookings, unsigned int id)
{
    for (auto booking : bookings)
    {
        if (booking.getId() == id)
        {
            bookings.erase(std::find(bookings.begin(), bookings.end(), booking), bookings.end());
            return;
        }
    }
    std::cout << "Booking not found" << std::endl;
}