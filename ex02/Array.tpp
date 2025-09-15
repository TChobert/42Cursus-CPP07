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
Array<T>::Array(const Array<T>& other) : _array(new T[other._arraySize]), _arraySize(other._arraySize) {
	for (unsigned int i = 0; i < _arraySize; ++i) {
		_array[i] = other._array[i];
	}
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

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this != &other) {
		delete[] _array;
		_array = new T[other._arraySize];
		_arraySize = other._arraySize;
		for (unsigned int i = 0; i < _arraySize; ++i) {
			_array[i] = other._array[i];
		}
	}
	return (*this);
}
