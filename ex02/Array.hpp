#pragma once

#include <exception>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array {

	private:

	T *_array;
	unsigned int _arraySize;

	public:

	Array(void);
	Array(unsigned int size);
	~Array(void);

	const T& operator[](std::size_t pos) const;
	T& operator[](std::size_t pos);
	unsigned int size(void) const;
};

#include "Array.tpp"
