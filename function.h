#include "booking.h"
#include <algorithm>
#include <cmath>

/*! 
 * \brief function to fill the hotel with rooms.
 * \param hotel : the hotel.
 */
void fillHotelWithRooms(Hotel& hotel);

/*!
 * \brief function to display the client info.
 * \param clients : the vector of clients.
 * \param name : the name of the client.
 * \return Return the client.    
 */
Client displayClientInfo(std::vector<Client>& clients, std::string name);

/*!
 * \brief function to create a new client.
 * \param clients : the vector of clients.
 * \param name : the name of the client.
 * \return Return the client.    
 */
Client createANewClient(std::vector<Client>& clients, std::string name);

/*!
 * \brief function to display the booking info.
 * \param bookings : the vector of bookings.
 * \param checkInDate : the check in date.
 * \param roomNumber : the room number.
 * \param clients : the vector of clients.
 * \param hotel : the hotel.
 * \return Return the booking.    
 */
void displayBookingInfo(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);

/*!
 * \brief function to create a new booking.
 * \param bookings : the vector of bookings.
 * \param checkInDate : the check in date.
 * \param roomNumber : the room number.
 * \param clients : the vector of clients.
 * \param hotel : the hotel.
 * \return Return the booking.    
 */
void createANewBooking(std::vector<Booking>& bookings, Date checkInDate, unsigned int roomNumber, std::vector<Client>& clients, Hotel& hotel);

/*!
 * \brief function to check if the date is valid.
 * \param d : the day.
 * \param m : the month.
 * \param y : the year.
 * \return Return true if the date is valid, false otherwise.  
 */
bool dateIsValid(int d, int m, int y);

/*!
 * \brief function to display all bookings.
 * \param bookings : the vector of bookings.
 * \return Return all the bookings of the hotel.    
 */  
void displayAllBookings(std::vector<Booking>& bookings);

/*!
 * \brief function to find the first free booking id.
 * \param bookings : the vector of bookings.
 * \return Return the first free booking id.    
 */
unsigned int findFirstFreeBookingId(std::vector<Booking>& bookings);

/*!
 * \brief function to display a booking with a specific id.
 * \param bookings : the vector of bookings.
 * \param id : the id of the booking.
 * \return Return the booking with the id.    
 */
void displayBookingWithId(std::vector<Booking>& bookings, unsigned int id);

/*!
 * \brief function to display all bookings for a client.
 * \param bookings : the vector of bookings.
 * \param name : the name of the client.
 * \return Return all the bookings of a client.    
 */
void displayAllBookingsForAClient(std::vector<Booking>& bookings, std::string name);

/*!
 * \brief function to modify a booking.  
 * \param bookings : the vector of bookings.
 * \param id : the id of the booking.
 * \return Return the modified booking.
 */
void modifyBooking(std::vector<Booking>& bookings, unsigned int id);

/*!
 * \brief function to delete a booking.
 * \param bookings : the vector of bookings.
 * \param id : the id of the booking.
 * \return Return the deleted booking.
 */
void deleteBooking(std::vector<Booking>& bookings, unsigned int id);