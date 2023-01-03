#include "booking.h"

void fillHotelWithRooms(Hotel& hotel);
Client displayClientInfo(std::vector<Client>& clients, std::string name);
Client createANewClient(std::vector<Client>& clients, std::string name);
void displayBookingInfo(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);
void createANewBooking(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);
bool dateIsValid(int d, int m, int y);