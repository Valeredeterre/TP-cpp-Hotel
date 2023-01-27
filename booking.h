#include "client.h"
#include "hotel.h"
#include "date.h"

class Booking
{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Booking class.
     *  \param checkInDate : the check in date of the booking
     *  \param hotel : the hotel of the booking
     *  \param client : the client of the booking
     *  \param roomNumber : the room number of the booking
     *  \param numberOfNights : the number of nights of the booking
     *  \param id : the id of the booking
     */
    Booking(Date checkInDate, Hotel& hotel, Client& client, unsigned int roomNumber, unsigned int numberOfNights, unsigned int id=0);
    /*!
     *  \brief IO overload.
     *
     *  Show the booking with std::cout.
     *
     */
    friend std::ostream& operator<<(std::ostream& os, const Booking& booking);
    //methods
    /*!
     *  \brief Setter allow to set the check in date of the booking.
     *  \return Return true if the check in date is valid. 
     */
    void setCheckInDate(Date checkInDate);
    /*!
     *  \brief Setter allow to set the number of nights of the booking.
     *  \return Return true if the number of nights is valid. 
     */
    void setNumberOfNights(unsigned int numberOfNights);
    /*!
     *  \brief Getter allow to get the client of the booking.
     *  \return Return the client of the booking.
     */
    Client getClient();
    /*!
     *  \brief Getter allow to get the check in date of the booking.
     *  \return Return the check in date of the booking.
     */
    Date getCheckInDate();
    /*!
     *  \brief Getter allow to get the number of the room.
     *  \return Return the number of the room.
     */
    unsigned int getRoomNumber();
    /*!
     *  \brief Getter allow to get the number of nights.
     *  \return Return the number of nights.
     */
    unsigned int getNumberOfNights();
    /*!
     *  \brief Getter allow to get the id of the booking.
     *  \return Return the id of the booking.
     */
    unsigned int getId();
    /*!
     *  \brief Setter allow to set the room number of the booking.
     *  \return Return true if the room number is valid. 
     */
    bool setRoomNumber(unsigned int roomNumber);
    /*!
     *  \brief Getter allow to get the hotel of the booking.
     *  \return Return the hotel of the booking.
     */
    Hotel& getHotel();
private:
    //private methods
    /*!
     *  \brief Method allow to calculate the total cost of the booking.
     *  \return Return the total cost of the booking.
     */
    float totalCost();
    //private attributes
    Date _checkInDate;
    Hotel _hotel;
    Client _client;
    //private variables
    float _totalCost;
    unsigned int _roomNumber;
    unsigned int _numberOfNights;
    unsigned int _id;
};