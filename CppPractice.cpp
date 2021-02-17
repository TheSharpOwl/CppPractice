#include <iostream>
#include "zVector.h"

int main()
{
    zVector<int> z(10);
    z[0] = 100;


    std::cout << z[0] << std::endl;

    z.resize(20);
    z[19] = 1000;
    std::cout << z[19] << std::endl;

    return 0;
}
