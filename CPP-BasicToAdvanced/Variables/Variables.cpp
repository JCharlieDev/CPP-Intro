// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //  char, short, int, long, long long; 1 byte, 2 bytes, 4 bytes, 4 bytes and 8 bytes respectedly
    //  float, double, long double; decimals

    char a = 65;   //  'A' or 65 = A, that's the number associated with the character

    int variable = 8;   //  int is a 4 bytes size -2b to 2b (b = billion), 2^31, and a bit for the sign
    unsigned var = 123; //  This variable does not has a sign, therefore its value is 2^32 = 4b
    float floatVar = 5.5;   //  it's not a float, it's a double
    double douableVar = 5.5;
    float realFloat = 5.5f; //  This is the correct way to declare a float

    bool isBool = false;    //  0 = false, 1 = true. 1 byte of size to boolean.

    std::cout << variable << std::endl;
    std::cout << a << std::endl;

    variable = 20;

    std::cout << variable << std::endl;

    std::cout << " ************* Size of Data Types ************* " << std::endl;
    std::cout << "Size of bool: ";
    std::cout << sizeof(bool);

    //  Pointer declaration:
    bool* isPointer;
    //  Reference declaration:
    //  bool& isReferenced;

    std::cin.get();
}