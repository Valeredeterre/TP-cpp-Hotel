#include <iostream>
#include <string>

class Client
{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Client class.
     *  \param name : the name of the client
     *  \param firstName : the first name of the client
     *  \param id : the id of the client
     */
    Client(std::string name, std::string firstName, std::string id);
    //methods
    /*!
     *  \brief Getter allow to get the name of the client.
     *  \return Return the name of the client. 
     */
    std::string GetName() const;
    /*!
     *  \brief Getter allow to get the first name of the client.
     *  \return Return the first name of the client. 
     */
    std::string GetFirstName() const;
    /*!
     *  \brief Getter allow to get the id of the client.
     *  \return Return the id of the client. 
     */
    std::string GetId() const;
    /*!
     *  \brief IO overload.
     *
     *  Show the client with std::cout.
     *
     */
    friend std::ostream& operator<<(std::ostream& os, const Client& client);
private:
    //private variables
    std::string _name;
    std::string _firstName;
    std::string _id;
 };