#include <iostream>

int main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;	//	Goes to the next iteration, skipping whatever is left on the current one.
		}

		std::cout << "Hello World\n";
		std::cout << i << std::endl;
	}

	std::cout << "\n====================\n";

	i = 5;

	while (i < 10)
	{
		if (i == 8)
		{
			break;	//Exits the loop
		}

		std::cout << "Hello\n";
		i++;
	}
	
	std::cout << "\n====================\n";

	i = 5;

	do
	{
		std::cout << "Sup!\n";
		i++;

	} while (i < 10);

	std::cin.get();
}