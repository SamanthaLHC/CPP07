#include "colors.h"
#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	int i = 42;
	int j = 24;

	std::string str1 = "salut";
	std::string str2 = "SALUT";

	char a = 'a';
	char b = 'b';

	// float f1 = 420, 042f;
	// float f2 = 34, 87f;

	std::cout << BCYN << "_____CHECK SWAP______" << RES << std::endl;
	std::cout << BBLU << "_____with char: ______" << RES << std::endl;
	std::cout << BBLU << "data before swap :" << RES << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	swap(a, b);
	std::cout << BBLU << "data AFTER swap :" << RES << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << BBLU << "_____with int: ______" << RES << std::endl;
	std::cout << BBLU << "data before swap :" << RES << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	swap(i, j);
	std::cout << BBLU << "data AFTER swap :" << RES << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << BBLU << "_____with str: ______" << RES << std::endl;
	std::cout << BBLU << "data before swap :" << RES << std::endl;
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	swap(str1, str2);
	std::cout << BBLU << "data AFTER swap :" << RES << std::endl;
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;

	std::cout << BCYN << "_____CHECK MIN______" << RES << std::endl;
	std::cout << BBLU << "_____with char: ______" << RES << std::endl;
	std::cout << BBLU << "data before min :" << RES << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << BBLU << "min val between: " << a << " and " << b << RES << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << BBLU << "_____with int: ______" << RES << std::endl;
	std::cout << BBLU << "data before min :" << RES << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << BBLU << "min val between: " << i << " and " << j << RES << std::endl;
	std::cout << min(i, j) << std::endl;
	std::cout << BBLU << "_____with str: ______" << RES << std::endl;
	std::cout << BBLU << "data before min :" << RES << std::endl;
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << BBLU << "min val between: " << str1 << " and " << str2 << RES << std::endl;
	std::cout << min(str1, str2) << std::endl;

	std::cout << BCYN << "_____CHECK MAX______" << RES << std::endl;
	std::cout << BBLU << "_____with char: ______" << RES << std::endl;
	std::cout << BBLU << "data before max :" << RES << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << BBLU << "max val between: " << a << " and " << b << RES << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << BBLU << "_____with int: ______" << RES << std::endl;
	std::cout << BBLU << "data before min :" << RES << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << BBLU << "max val between: " << i << " and " << j << RES << std::endl;
	std::cout << max(i, j) << std::endl;
	std::cout << BBLU << "_____with str: ______" << RES << std::endl;
	std::cout << BBLU << "data before max :" << RES << std::endl;
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << BBLU << "max val between: " << str1 << " and " << str2 << RES << std::endl;
	std::cout << max(str1, str2) << std::endl;
}