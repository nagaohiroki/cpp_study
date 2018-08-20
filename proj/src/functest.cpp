#include "functest.h"
#include <iostream>
Functest::Functest(int32_t inInter) :
	inter(inInter)
{
	std::cout << "construct" << inter <<  std::endl;
}
Functest::~Functest()
{
	std::cout << "destruct" << inter << std::endl;
}
