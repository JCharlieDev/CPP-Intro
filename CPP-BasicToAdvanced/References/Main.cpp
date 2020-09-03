#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
	value++;
	//	(*value)++;	//	Dereferences the pointer so we can write on it. De lo contrario it would have incremented the memory address
}

int main()
{
	//	References are usually pointers in disguise. A way for us to reference an existing variable.
	int varA = 5;
	//int& refVarA = varA;	//	This reference only exist in our code. It's like an alias to our referenced variable.

	//refVarA = 2;

	Increment(varA);

	LOG(varA);

	//	To affect the value of a pointer, we first need to dereference it
	int a = 10;
	int b = 11;

	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	LOG(a);
	LOG(b);

	std::cin.get();
}