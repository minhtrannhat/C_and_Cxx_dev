#include <iostream>
#include <iomanip>

int main() {

    double d = 6.15 - 3.15;
    
    std::cout << std::setprecision(17);
    std::cout << "The value of d is actually is " <<  d << std::endl;

    std::cout << std::boolalpha;
    std::cout << (d == 3.00);

    return 0;
}
