#include<iostream>
#define Zero 0
#include<climits> // defines INT_MAX as largest int values

int main() {
    
    short sam = SHRT_MAX;           // initialize a variable to max value
    unsigned short sue = sam;       // okay if variable sam already declared

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl
        << "Add $1 to each ammount." << std::endl << "Now";

    sam = sue + 1;
    sue = sue + 1;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited.";
    std::cout << "Take $1 from each account." << std::endl << "Now ";

    sam -= 1;
    sue -= 1;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
    std::cout << " dollars deposited." << std::endl << "Lucky Sue" << std::endl;
    return 0;
}



