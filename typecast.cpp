// typecast.cpp -- forcing type changes

#include <iostream>

int main() {
    
    int auks, bats, coots;

    // the following statement adds the value as double,
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statement add value as int
    bats = (int) 19.99 + (int) 11.99;                   // old C syntax
    coots = int (19.99) + int (11.99);                  // new C++ syntax

    std::cout << "auks = " << auks << ", bats = " << bats;
    std::cout << ", coots = " << coots << std::endl;

    char ch = 'Z';
    std::cout << "The code for " << ch << " is ";       // print as char
    std::cout << int(ch) << std::endl;
    std::cout << "Yes, the code is ";
    std::cout << static_cast<int>(ch) << std::endl;     // using static_cast

    return 0;
}
