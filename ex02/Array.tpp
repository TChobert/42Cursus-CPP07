#pragma once

template typename<T>
Array<T>::Array(void) {
	_array = new T;
}

template typename<T>
Array<T>::Array(unsigned long size) {
	_array = new[size];
}

template typename<T>
Array<T>::~Array(void) {
	delete[] _array;
}

template typename<T>
const T& Array<T>::operator[](std::size_t pos) const {
	return (_array[pos]);
}
