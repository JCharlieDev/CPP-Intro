#include <iostream>

extern int s_Variable;	//	Refers to a static variable in another cpp. Looks for that variable (External Linking)

class Singleton
{
//private:
//	static Singleton* s_Instance;

public:
	static Singleton& Get() 
	{ 
		static Singleton instance;
		return instance;
	}

	void Hello()
	{

	}
};

//Singleton* Singleton::s_Instance = nullptr;

void Function()
{
	static int i = 0;
	i++;

	std::cout << i << std::endl;
}
struct Entity
{
	static int x, y;

	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

void Print(Entity e)
{
	std::cout << e.x << ", " << e.y << std::endl;
}

int Entity::x;	//This is how the linker can link them appropiately
int Entity::y;	//This is how to define them.

int main()
{
	Entity entity;
	//	Entity entity1 = {1, 2};	//	Struct initialization
	Entity entity1;

	Entity::x = 1;
	Entity::y = 2;

	Entity::x = 3;
	Entity::y = 4;

	Entity::Print();

	//Function();
	//Function();
	//Function();
	//Function();
	//Function();

	Singleton::Get().Hello();

	std::cin.get();
}