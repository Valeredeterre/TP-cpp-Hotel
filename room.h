#include <string>
#include <iostream>

class Room
{
public:
    Room(float price = 0, unsigned int number = 0, std::string type = "Error", bool isAvailable = false);
    float getPrice() const;
    unsigned int getNumber() const;
    bool getIsAvailable() const;
    void setIsAvailable(bool isAvailable);
    std::string getType() const;
    void setPrice(float price);
    friend std::ostream& operator<<(std::ostream& os, const Room& room);
private:
    float _price;
    unsigned int _number;
    std::string _type;
    bool _isAvailable;
};