#include <iostream>

int main()
{
    int out = 1;
    int in = 0;
    std::cin >> in;

    for (int i = 1; i <= in; ++i)
    {
        out *= i;
    }
    
    std::cout << out << "\n";
}