#include <iostream>

int main()
{

    unsigned int n;
    std::cin >> n;

    unsigned int x = 1;
    if (n > 0)
    {
        unsigned int k = 0;
        bool e = true;
        do
        {
            if (++k == n)
            {
                e = false;
            }
            x *= 2;
        } while (e);
    }
    std::cout << x << std::endl;
}