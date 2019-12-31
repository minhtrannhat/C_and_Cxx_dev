// strings2.cpp -- reading more than one word with getline 

#include<iostream>

int main(void)
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name: \n";
    std::cin.getline(name, ArSize); // reads through newline
    std::cout << "Enter your favourite dessert: \n";
    std::cin.getline(dessert, ArSize);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << std::endl;

}