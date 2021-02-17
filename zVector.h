#pragma once

#include<cstddef> 
#include <stdexcept>

// TODO : Will add iterator implementation soon ))
// TODO : Add catch for testing

	// I know that a function is better here and this lamda takes more space but did it for learning purposes...
std::size_t getPower(std::size_t s) 
{
	std::size_t tempS = s; int ans = 0;
	while (tempS > 0) { tempS /= 2; ans++; }
	return ans;
};

template<typename T>
class zVector
{

public:

	zVector() : _size(0), powerOfTwo(0) {}

	zVector(const std::size_t s) : _size(s), powerOfTwo(getPower(s))
	{

		if(_size > 0)
			_data = new T[1LL << powerOfTwo];
	}

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

	void resize(std::size_t s)
	{
		int npoweroftwo = getPower(s);
		// there's an already enough space (standard library does this actually so i did the same so far)
		if (powerOfTwo >= npoweroftwo)
		{
			_size = s;
			return;
		}

		T* old_data = _data;
		_data = new T[1 << npoweroftwo];
		//copy the old data to the new vector
		for (std::size_t i = 0; i < _size; i++)
			_data[i] = old_data[i];
		//delete the old data
		delete[] old_data;

		// assign the new size
		_size = s;
		powerOfTwo = npoweroftwo;
	}

protected:

	T* _data;

	std::size_t _size;

	// which power of two is the size now ? equals -1 if the size is zero
	int powerOfTwo;
};

