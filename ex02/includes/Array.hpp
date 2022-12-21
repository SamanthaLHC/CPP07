#ifndef _ARRAY_HPP
#define _ARRAY_HPP

#include <iostream>
#include <colors.h>
#include <stdexcept>

template <typename T>

class Array
{
public:
	//______________Constructors an destructor_________________________________

	Array<T>() : _array(NULL), _n(0)
	{
		std::cout << BWHT << "Default cconstructor called" << RES << std::endl;
	}

	Array<T>(unsigned int n) : _array(new T[n]), _n(n)
	{
		std::cout << BWHT << "Constructor overload (n in param) called" << RES << std::endl;
	}

	Array<T>(Array<T> const &cpy)
	{
		std::cout << BWHT << "Copy constructor called" << RES << std::endl;
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = cpy._array[i];
		this->_array = new T[this->_n];
		*this = cpy;
	}

	~Array<T>()
	{
		std::cout << BWHT << "Destructor called" << RES << std::endl;
		delete[] this->_array;
	}

	//______________Operator overload___________________________________________

	Array<T> &operator=(Array<T> const &rhs)
	{
		std::cout << BWHT << "operator = overload: " << RES << std::endl;
		if (this != &rhs)
		{
			this->_n = rhs._n;
			if (this->_array)
			{
				delete[] this->_array;
				this->_array = NULL;
			}
			if (rhs._array)
				this->_array = new T[rhs._n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}

	bool operator==(Array<T> const &rhs)
	{
		if (this->size() != rhs.size())
			return false;
		for (unsigned int i = 0; i < this->_n; i++)
		{
			if (this->_array[i] != rhs._array[i])
				return false;
		}
		return true;
	}

	T &operator[](unsigned int idx) const
	{
		if (idx >= this->_n)
			throw WrongIndex();
		else
			return this->_array[idx];
	}

	//______________Accessors / Member function_______________________________

	unsigned int size(void) const
	{
		return this->_n;
	}

	//______________Exceptions__________________________________________________

	class WrongIndex : public std::exception
	{
		const char * what() const throw()
		{
			return "Error : wrong index!";
		}
	};

private:
	T *_array;
	unsigned int _n;
};

#endif