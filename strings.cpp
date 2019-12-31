// strings.cpp --storing strings in an array

#include<iostream>
#include<cstring> // for the strlen() func

int main(void)
{
    const int Size = 15;
    char name1[15]; // empty array
    char name2[Size] = "C++owboy"; // initialized array

    std::cout << "Howdy! I'm " << name2;
    std::cout << " ! What's your name?\n";
    std::cin >> name1;

    std::cout << "Well, " << name1 << ", your name has ";
    std::cout << strlen(name1) << " letters and is stored\n";
    std::cout << "in an array of " << sizeof(name1) << " bytes." << std::endl;
    std::cout << "Your initial is " <<  name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    std::cout << "Here are the first 3 characters of my name: ";
    std::cout << name2 << std::endl;
    return 0;
}
