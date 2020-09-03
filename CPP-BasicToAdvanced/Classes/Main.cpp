#include <iostream>

#define LOG(x) std::cout << x << std::endl

//	In classes, the default visibility modifier is private
class Player
{
	public:
		int PlayerX, PlayerY;
		int PlayerSpeed;

		void Move(int xa, int ya)
		{
			PlayerX += xa * PlayerSpeed;
			PlayerY += ya * PlayerSpeed;
		}
};
//	In structs, the default visibility modifier is public
struct SomeStruct
{
	int someInt = 3;
	int someInt1 = 4;

	void Sum(int a, int b)
	{

	}
};

int main()
{
	Player Player1;	//	Class instantiation in C++
	SomeStruct myStruct;

	myStruct.someInt = 3;

	Player1.PlayerX = 5;

	Player1.Move(1, -1);

	std::cin.get();
}