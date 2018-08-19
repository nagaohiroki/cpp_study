#include <memory>
#include <stdint.h>
#include <iostream>
#include "functest.h"
int main(int argc, char *argv[])
{
	std::shared_ptr<functest> c;
	{
		std::shared_ptr<functest> a(new functest(1));
		c = a;
	}
	std::shared_ptr<functest> b(new functest(2));
	return 0;
}
