#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int x = 1;

    for (int i = 1; i <= n; i++)
    {
        x *= 2;
    }
    
    std::cout << x << std::endl;
}