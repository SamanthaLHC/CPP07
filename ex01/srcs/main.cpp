#include "colors.h"
#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void capitalizer(std::string& elem)
{
	unsigned int size = elem.length();
	for (unsigned int i = 0; i < size ; i++)
		elem[i] = std::toupper(elem[i]);
}
template <>
void transform<std::string>(std::string& elem)
{
	capitalizer(elem);
}


int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	test(arr);
	std::string arr1[5] = {"Hola", "yOupi", "pouet", "coucou", "bisous Maman"};
	test(arr1);
}
