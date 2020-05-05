#include <iostream>

int Multiply(int numberA, int numberB)
{
	return numberA * numberB;
}

void MultiplyAndLog(int numA, int numB)
{
	int result = Multiply(numA, numB);

	std::cout << result << std::endl;
}

int main()
{
	//int result = Multiply(3, 2);

	//std::cout << "Multiplication" << std::endl;
	//std::cout << result;

	MultiplyAndLog(32, 4);
	MultiplyAndLog(12, 7);
	MultiplyAndLog(62, 5);

	std::cin.get();
}