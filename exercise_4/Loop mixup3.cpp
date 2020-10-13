#include <iostream>

int main()
{
    unsigned int z;
    unsigned int d;
    std::cin >> z >> d;

    while (z >= d)
    {
        z = z - d;
    }
    std::cout << z << std::endl;
}