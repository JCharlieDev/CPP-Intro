//	#define INTEGER int

//	Stuff about how the compiler works and how to read the output files in the properties menu of the project.
//	How to set up the optimization and how it affects the code
//	How header files work and use them to generate and replace code.

#include <iostream>
#include "Log.h"

////	Optimized version
//const char* Log(const char* message)
//{
//	return message;
//}

//void Log(const char* message)
//{
//	std::cout << message << std::endl;
//}

int MultiplyNum(int a, int b)
{
	Log("Multiplication");
	return Multiply(a, b);
}

inline int Multiply(int a, int b)
{
	return a * b;
}
//	#include "EndBrace.h"	//	Literally copies the code of the header file into the cpp file

