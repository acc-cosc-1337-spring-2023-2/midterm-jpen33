#include <iostream>
#include "question4.h"

int main()
{
    std::string str;
    bool is_pal;

    while (true) {
        std::cout << "Please enter a string or 'exit' to quit the program: ";
        std::cin >> str; 

        if (str == "exit") {
            break;
        }

        is_pal = is_Palindrome(str);

        std::cout << (is_pal ? "true" : "false") << std::endl;
    }

    return 0;
}