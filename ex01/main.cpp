#include "iter.hpp"

#include <string>

int main() {
    // 1. Tableau d'entiers
    int arr[] = {1, 2, 3, 4, 5};

    std::cout << "Original int array:" << std::endl;
    iter(arr, 5, print<int>);

    std::cout << "After increment:" << std::endl;
    iter(arr, 5, increment<int>);
    iter(arr, 5, print<int>);

    // 2. Tableau de chaînes de caractères (const)
    const std::string words[] = {"hello", "world", "template"};

    std::cout << "\nConst string array:" << std::endl;
    iter(words, 3, print<std::string>);

	// 3. X2 tableau ints

	int arr2[] = {1,2,3,4,5};
	std::cout << "Original int array:" << std::endl;
    iter(arr2, 5, print<int>);
	std::cout << "After double" << std::endl;
	iter(arr2, 5, doubleElement<int>);
	iter(arr2, 5, print<int>);


	// 3. X2 tableau szie_t

	std::size_t arr3[] = {10,20,30,40,50};
	std::cout << "Original size_t array:" << std::endl;
    iter(arr3, 5, print<std::size_t>);
	std::cout << "After double" << std::endl;
	iter(arr3, 5, doubleElement<std::size_t>);
	iter(arr3, 5, print<std::size_t>);

    return 0;
}
