#pragma once
#include <stdint.h>
class Functest
{
public:
	explicit Functest(int32_t inInter);
	virtual ~Functest();
private:
	int32_t inter;
};

