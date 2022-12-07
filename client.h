#include <iostream>
#include <string>

class Client
 {
public:
    Client(std::string name, std::string firstName, std::string id);
    std::string GetName() const;
    std::string GetFirstName() const;
    std::string GetId() const;
    friend std::ostream& operator<<(std::ostream& os, const Client& client);
private:
    std::string _name;
    std::string _firstName;
    std::string _id;
 };