#include "client.h"

Client::Client(std::string name, std::string firstName, std::string id)
{
    _name = name;
    _firstName = firstName;
    _id = id;
}

std::string Client::GetName() const
{
    return _name;
}

std::string Client::GetFirstName() const
{
    return _firstName;
}

std::string Client::GetId() const
{
    return _id;
}

std::ostream& operator<<(std::ostream& os, const Client& client)
{
    os << client._name << " " << client._firstName << ", ID: " << client._id;
    return os;
}
