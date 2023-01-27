#include <string>
#include <iostream>

class Room
{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Room class.
     *  \param price : the price of the room
     *  \param number : the number of the room
     *  \param type : the type of the room
     *  \param isAvailable : the availability of the room
     */
    Room(float price = 0, unsigned int number = 0, std::string type = "Error", bool isAvailable = false);
    
    //methods
    /*!
     * \brief Getter allow to get the price.
     * \return Return the price.
     */
    float getPrice() const;
    /*!
     * \brief Getter allow to get the number.
     * \return Return the number.
     */
    unsigned int getNumber() const;
    /*!
     * \brief Getter allow to get the availability.
     * \return Return the availability.
     */
    bool getIsAvailable() const;
    /*!
     * \brief Setter allow to set the availability.
     * \param isAvailable : the availability of the room
     */
    void setIsAvailable(bool isAvailable);
    /*!
     * \brief Getter allow to get the type.
     * \return Return the type.
     */
    std::string getType() const;
    /*!
     * \brief Setter allow to set the price.
     * \param price : the price of the room
     */
    void setPrice(float price);

    /*!
     *  \brief IO overload.
     *
     *  Show the room with std::cout.
     *
     */
    friend std::ostream& operator<<(std::ostream& os, const Room& room);
private:
    //private variables
    float _price;
    unsigned int _number;
    std::string _type;
    bool _isAvailable;
};