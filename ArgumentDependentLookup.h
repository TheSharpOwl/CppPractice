#pragma once
#include<iostream>
/*
* https://preshing.com/20210315/how-cpp-resolves-a-function-call/
* https://stackoverflow.com/questions/8111677/what-is-argument-dependent-lookup-aka-adl-or-koenig-lookup
* https://en.cppreference.com/w/cpp/language/adl
*/
namespace toto
{
	class A {};
	int f(int x, A y)
	{
		return x + 3;
	}
}

template<typename T> bool f(double x, T other) { return x + 1; }

toto::A a;

int test()
{

	std::cout << f(10, a) << std::endl;

	return 0;
}