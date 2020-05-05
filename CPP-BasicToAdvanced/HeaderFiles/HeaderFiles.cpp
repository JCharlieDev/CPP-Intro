#include <iostream>
#include "Log.h"
//  Header files are use to declare certain types of functions

int main()
{
    InitLog();
    Log("Hello World");
    std::cin.get();
}