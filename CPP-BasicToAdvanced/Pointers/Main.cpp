#include <iostream>

#define LOG(x) std::cout << x << std::endl;	//	Preproccess directive macro

int main()
{
	//	A pointer is an adress, an integer which hold a memory address.

	void* ptr = NULL;	//	It's the same as = 0. A null pointer might crash programs
	void* ptr2 = nullptr;	//	Same as above

	int var = 8;
	int* varPtr = &var;

	double* varDbPtr = (double*)&var; //	Will have the same value

	*varPtr = 10;	//	This is de-referencing a pointer, which gives us access to the data. We can read from and write from that data.

	LOG(var);

	char* buffer = new char[8];	//	Allocating memory of a specific size. Returns a pointer to the beginning of that block of memory
	memset(buffer, 0, 8);	//	Fills a block of memory with specified data

	char** ptrBuffer = &buffer;	//	Pointer to a pointer

	delete[] buffer;


	std::cin.get();
}