#include <iostream>
#include "zVector.h"
#include <utility>
#include <string>
int main()
{
    zVector<int> z(10);
    z[0] = 100;


    std::cout << z[0] << std::endl;

    z.resize(20);
    z[19] = 1000;
    std::cout << z[19] << std::endl;

    int x = 10;
    z.push_back(x);
    z.push_back(5);

    zVector<std::string> pv;
    std::string s = std::string("dada");

    pv.push_back(std::move(s));

    return 0;
}
