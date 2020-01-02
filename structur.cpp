// structur.cpp -- a simple structure

#include<iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest = 
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99,              // price value 
    };

    inflatable pal = 
    {
        "Audacious Arthur",
        3.12,
        32.99
    };

    std::cout << "Expand your guest list with " << guest.name;
    std::cout << " and " << pal.name << "!\n";

    std::cout << "You can have both for $";
    std::cout << guest.price + pal.price << std::endl;

    return 0;
}