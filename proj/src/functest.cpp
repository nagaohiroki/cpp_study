#include "functest.h"
#include <iostream>
functest::functest(int32_t inInter) :
	inter(inInter)
{
	std::cout << "construct" << inter <<  std::endl;
}
functest::~functest()
{
	std::cout << "destruct" << inter << std::endl;
}
