//  The Linker will link this to the main file.

#include <iostream>
#include "Log.h"

void InitLog(const char* message)
{
	Log("Initialize Log");
}

inline void Log(const char* message)
{
	std::cout << message << std::endl;
}