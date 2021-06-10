#include <iostream>
#include "Log.h"


int Multiply(int a, int b)
{
	return a * b;
}


void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}


void Increment(int* value)
{
	(*value)++;
}





void Increment1(int& value)
{
	value++;
}



class Player
{
public:
	int x, y;
	int speed;
	void Move(int xa, int ya)
	{
		x += xa * speed; 
		y += ya * speed;
	}
};


class Log1
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;


private:
	int m_LogLevel = LogLevelInfo;


public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
		std::cout << "[ERROR]:" << message << std::endl;
	}
	
	
	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
		std::cout << "[WARNING]:" << message << std::endl;
	}
	
	
	
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
		std::cout << "[INFO]:" << message << std::endl;
	}
};



void Function()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}



class Singleton
{
public:
	static Singleton& Get() 
	{ 
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};


int main()
{	
	

	//Variables


	/*char , short , long  , int , long long  , float , double , bool*/

	unsigned int variable = 8;// -2b -> 2b

	Log("====================================");

	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;

	Log("====================================");

	bool var = false;
	std::cout << sizeof(bool) << std::endl;

	Log("====================================");
	
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);
	

	InitLog();

	Log("====================================");

	//Branches If Else
	int x = 5;
	bool comparisonResult = x == 5;
	if (comparisonResult)//Default true
	{
	Log("Hello World1");
	}

	Log("====================================");
	
	if (1)//True
		Log("Hello World2");
	
	Log("====================================");
	
	
	if (0) //False
		Log("Hello World3");

	Log("====================================");
	
	int x1 = 6;
	bool comparisonResult1 = x1 == 5;
	if (comparisonResult1)//Default true
	{
	Log("Hello World4");
	}

	Log("====================================");



	
	const char* ptr1 = "ptr Hello";
	if (ptr1)
		Log(ptr1);

	Log("====================================");
	
	
	const char* ptr2 = nullptr;
	if (ptr2)//default ptr1 != nullptr
		Log(ptr2);

	Log("====================================");
	
	
	const char* ptr3 = "Hello";
	if (ptr3)//default ptr1 != nullptr
		Log(ptr3);
	else if (ptr3 == "Hello")
		Log("Ptr is Hello");
	else
		Log("Ptr is null");


	Log("====================================");
	//Loops


	for (int i = 0; i < 5; i++)
	{
		Log("Hello World5");
	}

	Log("====================================");


	int y = 0;
	for (;y < 5;)
	{
		Log("Hello World6");
		y++;
	}
	
	Log("====================================");
	
	
	int z = 0;
	bool condition = true;
	for (;condition;)
	{
		Log("Hello World7");
		z++;
		if (!(z < 5))
			condition = false;
	}

	Log("====================================");

	int a = 0;
	while (a < 5)
	{
		Log("Hello World8");
		a++;
	}

	Log("====================================");


	int i = 0;
	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue;
		Log("Hello World!");
		std::cout << i << std::endl;

	}
	
	
	
	Log("====================================");


	 i = 0;
	for (i = 0; i < 5; i++)
	{
		if ((i+1) % 2 == 0)
			break;
		Log("Hello World!");
		std::cout << i << std::endl;

	}
	

	/*
	Log("====================================");
	
	i = 0;
	for (i = 0; i < 5; i++)
	{
		if ((i+1) % 2 == 0)
			return 0;
		Log("Hello World!");
		std::cout << i << std::endl;

	}
	*/



	//pointers

	/*
		int var1 = 8;
		int* ptr = &var1;
		*ptr = 10;
		Log(var1);
	*/



	//References

	Log("====================================");


	a = 5;
	Increment(&a);
	std::cout << a << std::endl;
	
	
	
	Log("====================================");


	a = 5;
	Increment1(a);
	std::cout << a << std::endl;



	Log("====================================");

	a = 5;
	int b = 8;
	
	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	std::cout << a << std::endl;
	std::cout << b << std::endl;



	//Classes

	Log("====================================");


	Player player;
	player.x = 5;


	player.Move(1, -1);
	




	//Classes

	Log1 log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");





	Log("====================================");


	Function();
	Function();
	Function();



	Log("====================================");

	Singleton::Get().Hello();

	std::cin.get();

}

