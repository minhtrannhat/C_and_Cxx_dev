// init_ptr.cpp -- initialize a pointer

#include <iostream>

int main() {
    
    int higgens = 5;
    int * pt = &higgens; // Pointer-to-int

    std::cout << "Value of higgens = " << higgens << "; Adress of higgens = " << &higgens << std::endl;
    std::cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << std::endl;

    return 0;
}
