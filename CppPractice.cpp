#include "boost/scoped_array.hpp"
#include <iostream>

class A
{
public:

	A(){};
	~A()
	{
		std::cout << "destroyed\n";
	}
};
int main()
{
	{
		boost::scoped_array<A> p{ new A[2] };
	}
	//std::cin.get();
	return 0;

}