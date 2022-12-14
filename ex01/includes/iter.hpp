#ifndef _ITER_HPP
#define _ITER_HPP
#include <cstring>
#include <iostream>

template<typename T>
void iter(T *arr , int size, void (*f)(T& element))
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}

template<typename T>
void multiply(T& elem)
{
	elem *= 2;
}

template<typename T>
void capitalizer(T& elem)
{
	int size = strlen(elem);
	for (int i = 0; i < size ; i++)
		std::toupper(elem[i]);
}

#endif