// assgn_st.cpp -- assigning structure

#include <iostream>

struct inflatable{

    char name[20];
    float volume;
    double price;
};

int main() {
    
    inflatable bounquet {"sunflowers", 0.20, 12.49};

    inflatable choice;

    std::cout << "bounquet : " << bounquet.name << " for $";
    std::cout << bounquet.price << std::endl;

    choice = bounquet;          // assign one structure to another
    std::cout << "choice: " << choice.name << " for $";
    std::cout << choice.price << std::endl;

    return 0;
}

