#include "date.h"
#include "client.h"
#include "room.h"

int main()
{
    Room room(100, 1, "single", true);
    std::cout << room << std::endl;
    return 0;
}