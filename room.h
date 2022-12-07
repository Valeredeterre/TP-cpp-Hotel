#include <string>
#include <iostream>

class Room
{
public:
    Room(float price, int number, std::string type, bool isAvailable);
    float GetPrice() const;
    int GetNumber() const;
    bool getIsAvailable() const;
    void SetIsAvailable(bool isAvailable);
    std::string GetType() const;
    void SetPrice(float price);
    friend std::ostream& operator<<(std::ostream& os, const Room& room);
private:
    float _price;
    int _number;
    std::string _type;
    bool _isAvailable;
};