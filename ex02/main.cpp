#include <iostream>
#include <string>
#include "Array.hpp"

int main() {

	try {
		std::cout << "=== Test Array<int> ===" << std::endl;
		Array<int> arrInt(5);

		//Filling
		for (unsigned int i = 0; i < arrInt.size(); ++i) {
			arrInt[i] = i * 10;
		}

		// Displaying
		std::cout << "arrInt: ";
		for (unsigned int i = 0; i < arrInt.size(); ++i) {
			std::cout << arrInt[i] << " ";
		}
		std::cout << std::endl;

		//Copy constructor
		Array<int> copyInt(arrInt);
		copyInt[0] = 999;
		std::cout << "copyInt after modification: ";
		for (unsigned int i = 0; i < copyInt.size(); ++i) {
			std::cout << copyInt[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "arrInt after modification de copyInt: ";
		for (unsigned int i = 0; i < arrInt.size(); ++i) {
			std::cout << arrInt[i] << " ";
		}
		std::cout << std::endl;

		// Assignement operator
		Array<int> assignInt;
		assignInt = arrInt;
		assignInt[1] = 555;
		std::cout << "assignInt after modification: ";
		for (unsigned int i = 0; i < assignInt.size(); ++i) {
			std::cout << assignInt[i] << " ";
		}
		std::cout << std::endl;

		// Out of bounds access
		try {
			std::cout << "Accès hors borne arrInt[10]: ";
			arrInt[10] = 42;
		} catch (const std::out_of_range& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Test Array<std::string> ===" << std::endl;
		Array<std::string> arrStr(3);
		arrStr[0] = "hello";
		arrStr[1] = "world";
		arrStr[2] = "template";

		std::cout << "arrStr: ";
		for (unsigned int i = 0; i < arrStr.size(); ++i) {
			std::cout << arrStr[i] << " ";
		}
		std::cout << std::endl;

		// Copy and modification
		Array<std::string> copyStr(arrStr);
		copyStr[1] = "C++";
		std::cout << "copyStr après modification: ";
		for (unsigned int i = 0; i < copyStr.size(); ++i) {
			std::cout << copyStr[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "arrStr after modification of copyStr: ";
		for (unsigned int i = 0; i < arrStr.size(); ++i) {
			std::cout << arrStr[i] << " ";
		}
		std::cout << std::endl;

		// Test exception for out of bounds
		try {
			std::cout << "Accès hors borne arrStr[5]: ";
			arrStr[5] = "oops";
		} catch (const std::out_of_range& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n=== Test Array vide ===" << std::endl;
		Array<double> emptyArr;
		std::cout << "emptyArr size: " << emptyArr.size() << std::endl;
		try {
			emptyArr[0] = 3.14;
		} catch (const std::out_of_range& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}

	} catch (const std::exception& e) {
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}
