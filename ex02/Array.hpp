#pragma once

template <typename T>
class Array {

	private:

	T *_array;

	public:

	Array(void);
	Array(unsigned int size);
	~Array(void);

	const T& operator[](std::size_t pos) const;
};

#include "Array.tpp"
