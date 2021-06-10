/*
#include <iostream>
#include "Log.h"

void Log(const char* message);
{
	std::cout << message << std::endl;
}
*/

#include "Log.h"
#include <iostream>

void InitLog()
{
	Log("Initialized Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}
