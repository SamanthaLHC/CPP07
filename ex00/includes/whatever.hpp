#ifndef _WHATEVER_HPP
#define _WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> 
T const& min(T const& x, T const& y)
{
	return (x < y ? x : y);
}


template <typename T> 
T const& max(T const& x, T const& y)
{
	return (x > y ? x : y);
}

#endif