#include <memory>
#include <stdint.h>
#include <iostream>
#include "functest.h"
#include "argcheck.h"
int main(int argc, char *argv[])
{
	std::shared_ptr<Functest> c;
	std::shared_ptr<Functest> a(new Functest(1));
	c = a;
	std::shared_ptr<Functest> b(new Functest(2));
	b->Run(16);
	b->Run(3);
	std::cout << b.unique() << std::endl;
	Argcheck::Test(0.5f, 1, 2, "aa", 3, 0.5f, "縺ゅ≠");
	return 0;
}
