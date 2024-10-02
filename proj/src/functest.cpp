#include "functest.h"
#include <iostream>
Functest::Functest(int32_t inInter) : inter(inInter)
{
	std::cout << u"construct" << inter << std::endl;
	func = std::bind(&Functest::Pow, this, std::placeholders::_1);
}
Functest::~Functest()
{
	std::cout << "destruct" << inter << std::endl;
}
int Functest::Pow(int32_t inVal)
{
	return inVal * inVal;
}
void Functest::Set(std::function<int32_t(int32_t)> inFunc)
{
	func = inFunc;
}
void Functest::Run(int32_t inVal)
{
	std::cout << "FuncTest" << func(inVal) << std::endl;
}
