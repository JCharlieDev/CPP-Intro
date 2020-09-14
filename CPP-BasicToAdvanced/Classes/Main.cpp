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

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;	//m_	<- Member variable pre-fix

public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: "<< message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

void something() 
{

}

int main()
{
	Log log;
	Player Player1;	//	Class instantiation in C++
	SomeStruct myStruct;

	log.SetLevel(log.LogLevelError);
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");

	myStruct.someInt = 3;

	Player1.PlayerX = 5;

	Player1.Move(1, -1);

	std::cin.get();
}