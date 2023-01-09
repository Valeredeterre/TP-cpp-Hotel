#include "booking.h"
#include <algorithm>
#include <cmath>

void fillHotelWithRooms(Hotel& hotel);
Client displayClientInfo(std::vector<Client>& clients, std::string name);
Client createANewClient(std::vector<Client>& clients, std::string name);
void displayBookingInfo(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);
void createANewBooking(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);
bool dateIsValid(int d, int m, int y);
void displayAllBookings(std::vector<Booking>& bookings);
unsigned int findFirstFreeBookingId(std::vector<Booking>& bookings);
void displayBookingWithId(std::vector<Booking>& bookings, unsigned int id);
void displayAllBookingsForAClient(std::vector<Booking>& bookings, std::string name);
void modifyBooking(std::vector<Booking>& bookings, unsigned int id);
void deleteBooking(std::vector<Booking>& bookings, unsigned int id);