#include <iostream>
#include <Array.hpp>
#include <cstdlib>
#include <ctime>

// Conseil : Essayez de compiler int * a = new int(); puis affichez *a.

//_____________________MACRO____________________________________________________

#define CHECK_COPY(lhs, rhs) do {				\
	if (lhs == rhs) \
		std::cout << BCYN << "copy success" << RES << std::endl; \
	else \
		std::cout << BRED << "copy failed" << RES << std::endl; \
} while (0)


#define MAX_VAL 750

//_____________________MACRO____________________________________________________

int main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        CHECK_COPY(tmp, numbers);
		Array<int> test(tmp);
        CHECK_COPY(test, tmp);
		Array<int> pouet(15);
		pouet = tmp;
        CHECK_COPY(pouet, tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cout << BRED << "didn't save the same value!!" << RES << std::endl;
            return 1;
        }
    }
	std::cout << BMAG << "Example of content" << RES << std::endl;
	std::cout << BMAG << mirror[25] << RES << std::endl;
	std::cout << BMAG << numbers[25] << RES << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << BYEL << "EXCEPTION CAUGHT:" << RES << std::endl;
        std::cout << BRED << e.what() << RES << std::endl;
    }
    try
    {
        numbers[752] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << BYEL << "EXCEPTION CAUGHT:" << RES << std::endl;
        std::cout << BRED << e.what() << RES << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}