#include "functest.h"
#include <iostream>
functest::functest(int32_t inInter) :
	inter(inInter)
{
	std::cout << "コンストラクタ" << inter <<  std::endl;
}
functest::~functest()
{
	std::cout << "デストラクタ" << inter << std::endl;
}
