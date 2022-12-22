#ifndef _ITER_HPP
#define _ITER_HPP
#include <cstring>
#include <iostream>

template<typename T>
void iter(T *arr , unsigned int size, void (*f)(T& element))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

template<typename T>
void multiply(T& elem)
{
	elem *= 2;
}

template <typename T>
void transform(T& elem)
{
	multiply(elem);
}

template <typename T>
void test(T input[5])
{
	iter(input, 5, &transform<T>);
	for (unsigned int i = 0; i < 5; i++)
		std::cout << input[i] << std::endl;
}

#endif