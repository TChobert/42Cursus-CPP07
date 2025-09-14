#pragma once

#include <iostream>

template<typename T>
void doubleElement(T& elem) {
	elem *= 2;
}

template<typename T>
void increment(T& elem) {
	++elem;
}

template<typename T>
void print(const T& elem) {
	std::cout << elem << std::endl;
}

template <typename T, typename F>
void iter(T *arr, std::size_t len, F f) {

	for (std::size_t i = 0; i < len; ++i) {
		f(arr[i]);
	}
}
