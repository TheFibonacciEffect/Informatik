#include <iostream>

int main()
{
    double input;
    
    std::cout << "input: ";
    
    std::cin >> input;

    for(int i = 0; i < 16; i++)
    {
        int first_digit = input;
        std::cout << first_digit;
        if (i == 0)
        {
            std::cout << ".";
        }
        input -= first_digit;
        input *= 2;
    }

}