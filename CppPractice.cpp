#include <iostream>
#include "zVector.h"

int main()
{
    zVector<int> z(10);
    z[0] = 100;


    std::cout << z[0];
}
