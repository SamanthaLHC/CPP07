#include "colors.h"
#include "iter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

//Main correction
// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 )
// 		{
// 			return;
// 		}
// 		int get( void ) const
// 		{
// 			return this->_n;
// 		}
// 	private:
// 		int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
// 	o << rhs.get();
// 	return o;
// }
// template< typename T >
// void print(T const & x)
// {
// 	std::cout << x << std::endl;
// 	return;
// }
// int main() 
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }



int main()
{
	int arr[3] = {1, 2, 3};
	iter(arr, 3, &multiply);
	for (int i = 0; i < 3; i++)
		std::cout << arr[i] << std::endl;

	std::string arr1[3] = {"Hola", "yOupi", "pouet"};
	iter(arr, 3, &capitalizer);
	for (int i = 0; i < 3; i++)
		std::cout << arr[i] << std::endl;
}