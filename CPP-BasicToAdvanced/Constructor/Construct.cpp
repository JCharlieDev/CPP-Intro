#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()	//Constructor
	{
		X = 0.0f;
		Y = 0.0f;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}
	~Entity()	//This is the Destructor
	{

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

int main()
{
	Entity e(10.0f, 5.0f);

	std::cout << e.X << ", " << e.Y << std::endl;

	e.Print();

	std::cin.get();
}