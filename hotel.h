#include "address.h"
#include "room.h"
#include <vector>


class Hotel
{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Hotel class.
     *  \param address : the address of the hotel
     *  \param name : the name of the hotel
     *  \param id : the id of the hotel
     */
    Hotel(Address address, std::string name, std::string id);
    //methods
    /*!
     * \brief Getter allow to get the room of the hotel.
     * \param roomNumber : the number of the room
     * \return Return the room of the hotel.
     */
    Room getRoom(unsigned int roomNumber);
    /*!
     * \brief Setter allow to set the room of the hotel.
     * \param roomNumber : the number of the room
     * \param room : the room
     * \return Return true if the room is valid.
     */
    void setRoom(unsigned int roomNumber, Room room);
    /*!
     * \brief Add a room to the hotel.
     * \param room : the room
     * \return Return true if the room is valid.
     */
    bool addRoom(Room& room);
    /*!
     * \brief Remove a room to the hotel.
     * \param roomNumber : the number of the room
     * \return Return true if the room is valid.
     */
    bool removeRoom(unsigned int roomNumber);
    /*!
     * \brief Display the rooms of the hotel.
     * \return Return the rooms of the hotel.
     */
    void displayRooms() const;
    /*!
     * \brief Getter allow to get the id.
     * \return Return the id.
     */
    std::string getId() const;
    /*!
     * \brief Set the price of a room.
     * \param roomNumber : the number of the room
     * \param price : the price of the room 
     */
    void setRoomPrice(unsigned int roomNumber, float price);
    /*!
     *   IO overload.
     * 
     *
     *   Show the hotel with std::cout.
     *    
     */
    friend std::ostream& operator<<(std::ostream& os, const Hotel& hotel);
    /*!
     * \brief Getter allow to get the number of rooms.
     * \return Return the number of rooms. 
     */
    unsigned int getNumberOfRooms() const;
private:
    //private variables
    Address _address;
    std::string _name;
    std::vector<Room> _rooms;
    std::string _id;
};