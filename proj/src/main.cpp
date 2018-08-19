#include <memory>
#include <stdint.h>
#include <iostream>
#include <type_traits>
#include "functest.h"
int main(int argc, char *argv[])
{
	std::weak_ptr<functest> c(std::nullptr_t);
	std::shared_ptr<functest> a(new functest(1));
	std::shared_ptr<functest> b(new functest(2));
	return 0;
}
