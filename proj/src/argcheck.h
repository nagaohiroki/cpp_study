#pragma once
#include <iostream>
#include <stdint.h>
#include <string>
class Argcheck
{
  public:
	template <class... Args> static void Test(Args... args)
	{
	}
	template <class... Args> static void Test(int32_t Int, Args... args)
	{
		std::cout << "int:" << Int << std::endl;
		Test(args...);
	}
	template <class... Args> static void Test(float Float, Args... args)
	{
		std::cout << "float:" << Float << std::endl;
		Test(args...);
	}
	template <class... Args> static void Test(const std::string &Str, Args... args)
	{
		std::cout << "Strnig:" << Str << std::endl;
		Test(args...);
	}
	template <class... Args> static void Test(const char *Str, Args... args)
	{
		std::cout << "Char:" << Str << std::endl;
		Test(args...);
	}
};
