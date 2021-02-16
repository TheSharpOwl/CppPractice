#pragma once

#include<cstddef> 
#include <stdexcept>

template<typename T>
class zVector
{

public:

	zVector() : _size(0) {}

	zVector(const std::size_t s) : _data(new T[s]), _size(s) {}

	~zVector() {};


	std::size_t size()
	{
		return _size;
	}

	T& operator[](std::size_t index)
	{
		if (index < _size)
			return _data[index];
		else
			throw std::out_of_range("Index is bigger than the vector size");
	}

protected:

	T* _data;

	std::size_t _size;

};

