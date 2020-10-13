#include <iostream>

int main()
{
    int again;
    do
    {
        int i1, i2;
        std::cin >> i1 >> i2;
        std::cout << i1 + i2 << "\n";
        std::cout << "Again?(0/1)\n";
        std::cin >> again;
    } while (again != 0);
}