//  Preprocessor statement (Everything that starts with an "#").
//  Happen before the actual compilation.
//  "include" find the file called in the "<>". tipically called Header Files.
#include <iostream> //  Let's us use the std statement
#include "Log.h"

//  Declaration of the Log function
void Log(const char* message);
int MultiplyNum(int a, int b);

//  Entry point of our application.
int main()  //  Source File.
{
    //  "<<" are overloaded operators
    std::cout << ("Hello World!\n") << std::endl;
    //  Waits for the user to press enter.

    //  Log() function.
    Log("Hello from function: 'Log()'");

    std::cout << MultiplyNum(5, 5);

    std::cin.get();
}