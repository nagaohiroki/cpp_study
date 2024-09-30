#pragma once
#include <functional>
#include <stdint.h>
class Functest {
public:
  explicit Functest(int32_t inInter);
  virtual ~Functest();
  void Set(std::function<int32_t(int32_t)> inFunc);
  void Run(int32_t inVal);
  int Pow(int32_t inVal);

private:
  int32_t inter;
  std::function<int32_t(int32_t)> func;
};
