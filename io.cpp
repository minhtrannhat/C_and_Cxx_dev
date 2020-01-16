// Example
// Addition program.
#include <iostream>
#include <iomanip>


//int main(){
//	EnterNumber();
//};
  


/*
 * do sum calculations of two integer numbers
 */
int main ()
{
    
    int number1{0};  // first integer to be input by user
    int number2{0};  // second integer to be input by user
    int sum{0};       // variable in which sum will be stored



    std::cout << "Enter first integer: ";  // prompt
    std::cin >> number1;                  // read an integer

    std::cout << "The values of number1 typed in is " << number1 << std::endl;

    std::cout << "Enter second integer: "; // prompt
    std::cin >> number2;                  // read an integer

    sum = number1 + number2;  // assign result to sum

    std::cout << "Sum is " << sum << "\n"; // print sum

//    //exercises of div and float numbers

    float fnumber{0.0f};

    fnumber = (float) number2/number1;

    std::cout.precision(9);
    std::cout << "Div is " << fnumber << "\n"; // print sum

    return 0;   // indicate that program ended successfully
    
}; // end function main
