#include <iostream>

double g(double x)
{
    return 0.9*x*x + 1.3 * x -0.7;
}

int main()
{
    double x;
    double y;
    std::cin >> x >> y;

    double epsilon = 0.001;

    if ((g(x) <= y + epsilon) && (g(x) >= y - epsilon))
        std::cout << "yes" << "\n";
    else
    {
        std::cout << "no" << "\n";
        
    }
    
        
}