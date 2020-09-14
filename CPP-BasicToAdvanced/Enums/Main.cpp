#include <iostream>

#define LOG(x) std::cout << x << std::endl

enum Example : char
{
	A = 3, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
	Example value = B;

	if (value == 1)
	{
		//	Do something
	}

	std::cin.get();
}