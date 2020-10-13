#include <iostream>

int main()
{
    int numberOfTherms;

    std::cin >> numberOfTherms;

    double sum = 1;
    float pi;

    double product1 = 1;
    double product2 = 1;

    for(int i = 1; i<numberOfTherms;i++)
    {   
                
        product1 *= i;
        product2 *= (2*i+1);

        sum += product1/product2;
    }

    pi = 2*sum;
    std::cout << pi << "\n";
}
