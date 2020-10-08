#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()	//Constructor
	{
		X = 0.0f;
		Y = 0.0f;

		std::cout << "Created Entity!" << std::endl;
	}
	//Entity(float x, float y)
	//{
	//	X = x;
	//	Y = y;
	//}
	~Entity()	//This is the Destructor
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log
{
private:
	Log() = delete;	//Deletes the constructor
public:
	static void Write()
	{

	}
};

void Function()
{
	Entity e;
	e.Print();
	//e.~Entity();	//Another way to call the destructor
}

int main()
{
	Function();

	std::cin.get();
}