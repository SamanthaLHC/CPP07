#include "colors.h"
#include "whatever.hpp"
#include <iostream>
#include <string>

#define PRINTED_TEST(arg1, arg2, func, type)                                    \
	do                                                                          \
	{                                                                           \
		std::cout << BBLU << "____" #func " " #type "____" << RES << std::endl; \
		test(arg1, arg2, &func);                                                \
	} while (0);

template <typename T>
void test(T const& arg1, T const& arg2, T const& (*f)(T const&, T const&))
{
	std::cout << arg1 << " <> " << arg2 << " -> " << f(arg1, arg2) << std::endl;
}

template <typename T>
void test(T& arg1, T& arg2, void (*f)(T&, T&))
{
	std::cout << arg1 << " swap " << arg2 << " -> ";
	f(arg1, arg2);
	std::cout << arg1 << " swapped " << arg2 << std::endl;
}

int main()
{
	PRINTED_TEST(42, 24, min, int);
	PRINTED_TEST(2.3f, 420.042f, min, float);
	PRINTED_TEST(std::string("salut"), std::string("SALUT"), min, std::string);

	PRINTED_TEST(42, 24, max, int);
	PRINTED_TEST(2.3f, 420.042f, max, float);
	PRINTED_TEST(std::string("salut"), std::string("SALUT"), max, std::string);

	int a = 42, b =45;
	PRINTED_TEST(a, b, swap, int);
	float c = 42.34f, d = 8.9f;
	PRINTED_TEST(c, d, swap, float);
	std::string str1 = "pouet", str2 = "coucou";
	PRINTED_TEST(str1, str2, swap, std::string);
}