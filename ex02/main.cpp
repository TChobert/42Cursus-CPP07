#include "Array.hpp"

#include <iostream>
#include <string>
#include <stdexcept>

int main() {
    // 1. Test avec un Array<int>
    Array<int> intArr(5);
    std::cout << "Array<int> size: " << intArr.size() << std::endl;

    // Remplissage
    for (unsigned int i = 0; i < intArr.size(); ++i)
        intArr[i] = i * 10;

    // Affichage
    std::cout << "Contents of intArr: ";
    for (unsigned int i = 0; i < intArr.size(); ++i)
        std::cout << intArr[i] << " ";
    std::cout << std::endl;

    // Test accès hors limite
    try {
        std::cout << "Accessing intArr[10]..." << std::endl;
        intArr[10] = 42;  // hors borne
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    // 2. Test avec un Array<std::string>
    Array<std::string> strArr(3);
    strArr[0] = "hello";
    strArr[1] = "world";
    strArr[2] = "template";

    std::cout << "Array<std::string> size: " << strArr.size() << std::endl;
    std::cout << "Contents of strArr: ";
    for (unsigned int i = 0; i < strArr.size(); ++i)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    // Test accès hors limite
    try {
        std::cout << "Accessing strArr[5]..." << std::endl;
        strArr[5] = "oops";  // hors borne
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    // 3. Test Array vide (taille 0)
    Array<double> emptyArr;
    std::cout << "Array<double> size: " << emptyArr.size() << std::endl;

    try {
        std::cout << "Accessing emptyArr[0]..." << std::endl;
        emptyArr[0] = 3.14;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
