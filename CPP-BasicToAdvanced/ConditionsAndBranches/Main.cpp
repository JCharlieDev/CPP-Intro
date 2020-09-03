#include <iostream>
#include "Log.h"

int main()
{
	int x = 5;
	const char* ptr = "Hello";
	bool comparisonResults = x == 5;

	if (ptr)
	{
		Log(ptr);
	}
	else if (ptr == "Hello")
	{
		Log("Ptr is Hello");
	}
	else
	{
		Log("Ptr is null");
	}

	std::cin.get();
}