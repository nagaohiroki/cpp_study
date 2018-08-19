#pragma once
#include <stdint.h>
class functest
{
public:
	explicit functest(int32_t inInter);
	virtual ~functest();
	inline functest(const functest& inFunc) = delete;
private:
	int32_t inter;
};

