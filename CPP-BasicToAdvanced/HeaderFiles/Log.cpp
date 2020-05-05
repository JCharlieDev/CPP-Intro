#include <iostream>
#include "Log.h"

//	Function declaration

//	void Log(const char*);

void InitLog()
{
	Log("Initializing Log");	//	There's an error because the Log() function doesn't exist in this file but exist on other files
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}