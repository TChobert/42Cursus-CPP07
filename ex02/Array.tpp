#pragma once

template <typename T>
Array<T>::Array(void) : _array(NULL), _arraySize(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]), _arraySize(size) {}

template <typename T>
Array<T>::~Array(void) {
	delete[] _array;
}

template <typename T>
T& Array<T>::operator[](std::size_t pos) {
	if (pos >= _arraySize) {
		throw std::out_of_range("Index out of array range");
	}
	return (_array[pos]);
}

template <typename T>
const T& Array<T>::operator[](std::size_t pos) const {
	if (pos >= _arraySize) {
		throw std::out_of_range("Index out of array range");
	}
	return (_array[pos]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	return _arraySize;
}
