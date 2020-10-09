#include <iostream>

int main(){


    float pi;
    int n;
    std::cin >> n;

    float sum;
    // pi/4 = summe( (-1)^n / (2n + 1) )
    for (int i = 0; i < n; i++)
    {
        float glied = 1 / (2*(float)i+1);
        if (i%2==1)
            {
                glied *= -1;
            }
        sum += glied;
    }

    pi = sum * 4;

    std::cout << pi << "\n";


}